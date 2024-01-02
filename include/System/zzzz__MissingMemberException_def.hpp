#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MemberAccessException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MissingMemberException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class MissingMemberException;
}
// Write type traits
MARK_REF_PTR_T(::System::MissingMemberException);
// Type: System::MissingMemberException
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2436))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2528))
// CS Name: ::System::MissingMemberException*
class CORDL_TYPE MissingMemberException : public ::System::MemberAccessException {
public:
  // Declarations
  /// @brief Field ClassName, offset 0x90, size 0x8
  __declspec(property(get = __get_ClassName, put = __set_ClassName))::StringW ClassName;

  /// @brief Field MemberName, offset 0x98, size 0x8
  __declspec(property(get = __get_MemberName, put = __set_MemberName))::StringW MemberName;

  /// @brief Field Signature, offset 0xa0, size 0x8
  __declspec(property(get = __get_Signature, put = __set_Signature))::ArrayW<uint8_t, ::Array<uint8_t>*> Signature;

  __declspec(property(get = get_Message))::StringW Message;

  constexpr ::StringW& __get_ClassName();

  constexpr ::StringW const& __get_ClassName() const;

  constexpr void __set_ClassName(::StringW value);

  constexpr ::StringW& __get_MemberName();

  constexpr ::StringW const& __get_MemberName() const;

  constexpr void __set_MemberName(::StringW value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_Signature();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_Signature() const;

  constexpr void __set_Signature(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::System::MissingMemberException* New_ctor();

  /// @brief Method .ctor, addr 0x25d1818, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::MissingMemberException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x25d17a8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  static inline ::System::MissingMemberException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x25d1878, size 0x184, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetObjectData, addr 0x25d1c3c, size 0x15c, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Message, addr 0x25d1b10, size 0x12c, virtual true, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method FormatSignature, addr 0x25d1d98, size 0x48, virtual false, abstract: false, final false
  static inline ::StringW FormatSignature(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  // Ctor Parameters [CppParam { name: "", ty: "MissingMemberException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissingMemberException(MissingMemberException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissingMemberException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissingMemberException(MissingMemberException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissingMemberException();

public:
  /// @brief Field ClassName, offset: 0x90, size: 0x8, def value: None
  ::StringW ___ClassName;

  /// @brief Field MemberName, offset: 0x98, size: 0x8, def value: None
  ::StringW ___MemberName;

  /// @brief Field Signature, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Signature;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MissingMemberException, 0xa8>, "Size mismatch!");

static_assert(offsetof(::System::MissingMemberException, ___ClassName) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::MissingMemberException, ___MemberName) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::MissingMemberException, ___Signature) == 0xa0, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::MissingMemberException);
DEFINE_IL2CPP_ARG_TYPE(::System::MissingMemberException*, "System", "MissingMemberException");
