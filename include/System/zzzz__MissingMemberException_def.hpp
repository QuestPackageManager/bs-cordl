#pragma once
// IWYU pragma private; include "System/MissingMemberException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MemberAccessException_def.hpp"
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
// Dependencies System.MemberAccessException
namespace System {
// Is value type: false
// CS Name: System.MissingMemberException
class CORDL_TYPE MissingMemberException : public ::System::MemberAccessException {
public:
  // Declarations
  /// @brief Field ClassName, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_ClassName, put = __cordl_internal_set_ClassName)) ::StringW ClassName;

  /// @brief Field MemberName, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_MemberName, put = __cordl_internal_set_MemberName)) ::StringW MemberName;

  __declspec(property(get = get_Message)) ::StringW Message;

  /// @brief Field Signature, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_Signature, put = __cordl_internal_set_Signature)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Signature;

  /// @brief Method FormatSignature, addr 0x3e0dd58, size 0x48, virtual false, abstract: false, final false
  static inline ::StringW FormatSignature(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method GetObjectData, addr 0x3e0dbfc, size 0x15c, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::MissingMemberException* New_ctor();

  static inline ::System::MissingMemberException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::MissingMemberException* New_ctor(::StringW message);

  constexpr ::StringW const& __cordl_internal_get_ClassName() const;

  constexpr ::StringW& __cordl_internal_get_ClassName();

  constexpr ::StringW const& __cordl_internal_get_MemberName() const;

  constexpr ::StringW& __cordl_internal_get_MemberName();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Signature() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Signature();

  constexpr void __cordl_internal_set_ClassName(::StringW value);

  constexpr void __cordl_internal_set_MemberName(::StringW value);

  constexpr void __cordl_internal_set_Signature(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x3e0d7dc, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3e0d83c, size 0x184, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3e0d76c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method get_Message, addr 0x3e0dad4, size 0x128, virtual true, abstract: false, final false
  inline ::StringW get_Message();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissingMemberException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissingMemberException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissingMemberException(MissingMemberException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissingMemberException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissingMemberException(MissingMemberException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2527 };

  /// @brief Field ClassName, offset: 0x90, size: 0x8, def value: None
  ::StringW ___ClassName;

  /// @brief Field MemberName, offset: 0x98, size: 0x8, def value: None
  ::StringW ___MemberName;

  /// @brief Field Signature, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Signature;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::MissingMemberException, ___ClassName) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::MissingMemberException, ___MemberName) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::MissingMemberException, ___Signature) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::MissingMemberException, 0xa8>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MissingMemberException);
DEFINE_IL2CPP_ARG_TYPE(::System::MissingMemberException*, "System", "MissingMemberException");
