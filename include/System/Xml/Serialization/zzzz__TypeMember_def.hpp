#pragma once
// IWYU pragma private; include "System/Xml/Serialization/TypeMember.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeMember)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class TypeMember;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::TypeMember);
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.TypeMember
class CORDL_TYPE TypeMember : public ::System::Object {
public:
  // Declarations
  /// @brief Field member, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_member, put = __cordl_internal_set_member)) ::StringW member;

  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  /// @brief Method Equals, addr 0x436abbc, size 0x70, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x436ac2c, size 0xac, virtual false, abstract: false, final false
  static inline bool Equals(::System::Xml::Serialization::TypeMember* tm1, ::System::Xml::Serialization::TypeMember* tm2);

  /// @brief Method GetHashCode, addr 0x436ab74, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Xml::Serialization::TypeMember* New_ctor(::System::Type* type, ::StringW member);

  /// @brief Method ToString, addr 0x436acd8, size 0x64, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get_member() const;

  constexpr ::StringW& __cordl_internal_get_member();

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_member(::StringW value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x436ab48, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::StringW member);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeMember();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeMember", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeMember(TypeMember&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeMember", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeMember(TypeMember const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7404 };

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field member, offset: 0x18, size: 0x8, def value: None
  ::StringW ___member;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::TypeMember, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::TypeMember, ___member) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::TypeMember, 0x20>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::TypeMember);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::TypeMember*, "System.Xml.Serialization", "TypeMember");
