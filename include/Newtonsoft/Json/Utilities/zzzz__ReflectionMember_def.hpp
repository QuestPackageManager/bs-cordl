#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/ReflectionMember.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ReflectionMember)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class ReflectionMember;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::ReflectionMember);
// Type: Newtonsoft.Json.Utilities::ReflectionMember
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Utilities::ReflectionMember*
class CORDL_TYPE ReflectionMember : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Getter, put = set_Getter))::System::Func_2<::System::Object*, ::System::Object*>* Getter;

  __declspec(property(get = get_MemberType, put = set_MemberType))::System::Type* MemberType;

  __declspec(property(get = get_Setter, put = set_Setter))::System::Action_2<::System::Object*, ::System::Object*>* Setter;

  /// @brief Field <Getter>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Getter_k__BackingField,
                      put = __cordl_internal_set__Getter_k__BackingField))::System::Func_2<::System::Object*, ::System::Object*>* _Getter_k__BackingField;

  /// @brief Field <MemberType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__MemberType_k__BackingField, put = __cordl_internal_set__MemberType_k__BackingField))::System::Type* _MemberType_k__BackingField;

  /// @brief Field <Setter>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Setter_k__BackingField,
                      put = __cordl_internal_set__Setter_k__BackingField))::System::Action_2<::System::Object*, ::System::Object*>* _Setter_k__BackingField;

  static inline ::Newtonsoft::Json::Utilities::ReflectionMember* New_ctor();

  constexpr ::System::Func_2<::System::Object*, ::System::Object*>*& __cordl_internal_get__Getter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Object*, ::System::Object*>*> const& __cordl_internal_get__Getter_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__MemberType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__MemberType_k__BackingField() const;

  constexpr ::System::Action_2<::System::Object*, ::System::Object*>*& __cordl_internal_get__Setter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::System::Object*, ::System::Object*>*> const& __cordl_internal_get__Setter_k__BackingField() const;

  constexpr void __cordl_internal_set__Getter_k__BackingField(::System::Func_2<::System::Object*, ::System::Object*>* value);

  constexpr void __cordl_internal_set__MemberType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__Setter_k__BackingField(::System::Action_2<::System::Object*, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x2a35e4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Getter, addr 0x2a35e2c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_2<::System::Object*, ::System::Object*>* get_Getter();

  /// @brief Method get_MemberType, addr 0x2a35e1c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_MemberType();

  /// @brief Method get_Setter, addr 0x2a35e3c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_2<::System::Object*, ::System::Object*>* get_Setter();

  /// @brief Method set_Getter, addr 0x2a35e34, size 0x8, virtual false, abstract: false, final false
  inline void set_Getter(::System::Func_2<::System::Object*, ::System::Object*>* value);

  /// @brief Method set_MemberType, addr 0x2a35e24, size 0x8, virtual false, abstract: false, final false
  inline void set_MemberType(::System::Type* value);

  /// @brief Method set_Setter, addr 0x2a35e44, size 0x8, virtual false, abstract: false, final false
  inline void set_Setter(::System::Action_2<::System::Object*, ::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionMember();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMember", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionMember(ReflectionMember&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMember", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionMember(ReflectionMember const&) = delete;

  /// @brief Field <MemberType>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____MemberType_k__BackingField;

  /// @brief Field <Getter>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::System::Object*, ::System::Object*>* ____Getter_k__BackingField;

  /// @brief Field <Setter>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Action_2<::System::Object*, ::System::Object*>* ____Setter_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ReflectionMember, 0x28>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::ReflectionMember, ____MemberType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::ReflectionMember, ____Getter_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::ReflectionMember, ____Setter_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ReflectionMember);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ReflectionMember*, "Newtonsoft.Json.Utilities", "ReflectionMember");
