#pragma once
// IWYU pragma private; include "System/ComponentModel/Win32Exception.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__ExternalException_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Win32Exception)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::ComponentModel {
class Win32Exception;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Win32Exception);
// Dependencies System.Runtime.InteropServices.ExternalException, System.Runtime.Serialization.ISerializable
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.Win32Exception
class CORDL_TYPE Win32Exception : public ::System::Runtime::InteropServices::ExternalException {
public:
  // Declarations
  __declspec(property(get = get_NativeErrorCode)) int32_t NativeErrorCode;

  /// @brief Field nativeErrorCode, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_nativeErrorCode, put = __cordl_internal_set_nativeErrorCode)) int32_t nativeErrorCode;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method GetErrorMessage, addr 0x448aacc, size 0x8f4, virtual false, abstract: false, final false
  static inline ::StringW GetErrorMessage(int32_t error);

  /// @brief Method GetObjectData, addr 0x448b47c, size 0xc8, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::ComponentModel::Win32Exception* New_ctor();

  static inline ::System::ComponentModel::Win32Exception* New_ctor(int32_t error);

  static inline ::System::ComponentModel::Win32Exception* New_ctor(int32_t error, ::StringW message);

  static inline ::System::ComponentModel::Win32Exception* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  constexpr int32_t const& __cordl_internal_get_nativeErrorCode() const;

  constexpr int32_t& __cordl_internal_get_nativeErrorCode();

  constexpr void __cordl_internal_set_nativeErrorCode(int32_t value);

  /// @brief Method .ctor, addr 0x448aa20, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x448aa94, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(int32_t error);

  /// @brief Method .ctor, addr 0x448b3c0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t error, ::StringW message);

  /// @brief Method .ctor, addr 0x448b3ec, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_NativeErrorCode, addr 0x448b474, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_NativeErrorCode();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Win32Exception();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Win32Exception", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Win32Exception(Win32Exception&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Win32Exception", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Win32Exception(Win32Exception const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9463 };

  /// @brief Field nativeErrorCode, offset: 0x8c, size: 0x4, def value: None
  int32_t ___nativeErrorCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::Win32Exception, ___nativeErrorCode) == 0x8c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Win32Exception, 0x90>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::Win32Exception);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Win32Exception*, "System.ComponentModel", "Win32Exception");
