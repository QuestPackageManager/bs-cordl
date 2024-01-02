#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__ExternalException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Win32Exception)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::ComponentModel {
class Win32Exception;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Win32Exception);
// Type: System.ComponentModel::Win32Exception
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3302))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9492))
// CS Name: ::System.ComponentModel::Win32Exception*
class CORDL_TYPE Win32Exception : public ::System::Runtime::InteropServices::ExternalException {
public:
  // Declarations
  /// @brief Field nativeErrorCode, offset 0x8c, size 0x4
  __declspec(property(get = __get_nativeErrorCode, put = __set_nativeErrorCode)) int32_t nativeErrorCode;

  __declspec(property(get = get_NativeErrorCode)) int32_t NativeErrorCode;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  constexpr int32_t& __get_nativeErrorCode();

  constexpr int32_t const& __get_nativeErrorCode() const;

  constexpr void __set_nativeErrorCode(int32_t value);

  static inline ::System::ComponentModel::Win32Exception* New_ctor();

  /// @brief Method .ctor, addr 0x2939ba0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::ComponentModel::Win32Exception* New_ctor(int32_t error);

  /// @brief Method .ctor, addr 0x2939c14, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(int32_t error);

  static inline ::System::ComponentModel::Win32Exception* New_ctor(int32_t error, ::StringW message);

  /// @brief Method .ctor, addr 0x293a540, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t error, ::StringW message);

  static inline ::System::ComponentModel::Win32Exception* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x293a56c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_NativeErrorCode, addr 0x293a5f4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_NativeErrorCode();

  /// @brief Method GetObjectData, addr 0x293a5fc, size 0xcc, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetErrorMessage, addr 0x2939c4c, size 0x8f4, virtual false, abstract: false, final false
  static inline ::StringW GetErrorMessage(int32_t error);

  // Ctor Parameters [CppParam { name: "", ty: "Win32Exception", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Win32Exception(Win32Exception&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Win32Exception", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Win32Exception(Win32Exception const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Win32Exception();

public:
  /// @brief Field nativeErrorCode, offset: 0x8c, size: 0x4, def value: None
  int32_t ___nativeErrorCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Win32Exception, 0x90>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::Win32Exception, ___nativeErrorCode) == 0x8c, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::Win32Exception);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Win32Exception*, "System.ComponentModel", "Win32Exception");
