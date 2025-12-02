#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SetValueVisitor_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__PathVisitor_def.hpp"
CORDL_MODULE_EXPORT(SetValueVisitor_1)
namespace Unity::Properties {
template <typename TContainer, typename TValue> class Property_2;
}
namespace UnityEngine::Pool {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::UIElements {
class ConverterGroup;
}
namespace UnityEngine::UIElements {
template <typename TSrcValue> class SetValueVisitor_1___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TSrcValue> class SetValueVisitor_1;
}
namespace UnityEngine::UIElements {
template <typename TSrcValue> class SetValueVisitor_1___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::SetValueVisitor_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::SetValueVisitor_1___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// cpp template
template <typename TSrcValue>
// Is value type: false
// CS Name: UnityEngine.UIElements.SetValueVisitor`1/<>c<TSrcValue>
class CORDL_TYPE SetValueVisitor_1___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>* __9;

  static inline ::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>* New_ctor();

  /// @brief Method <.cctor>b__9_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>* __cctor_b__9_0();

  /// @brief Method <.cctor>b__9_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __cctor_b__9_1(::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>* v);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetValueVisitor_1___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetValueVisitor_1___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetValueVisitor_1___c(SetValueVisitor_1___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetValueVisitor_1___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetValueVisitor_1___c(SetValueVisitor_1___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4364 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.PathVisitor
namespace UnityEngine::UIElements {
// cpp template
template <typename TSrcValue>
// Is value type: false
// CS Name: UnityEngine.UIElements.SetValueVisitor`1<TSrcValue>
class CORDL_TYPE SetValueVisitor_1 : public ::Unity::Properties::PathVisitor {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>;

  /// @brief Field Pool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pool, put = setStaticF_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>* Pool;

  /// @brief Field Value, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_Value, put = __cordl_internal_set_Value)) TSrcValue Value;

  /// @brief Field <group>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__group_k__BackingField, put = __cordl_internal_set__group_k__BackingField)) ::UnityEngine::UIElements::ConverterGroup* _group_k__BackingField;

  __declspec(property(get = get_group, put = set_group)) ::UnityEngine::UIElements::ConverterGroup* group;

  static inline ::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>* New_ctor();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method VisitPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TContainer, typename TValue> inline void VisitPath(::Unity::Properties::Property_2<TContainer, TValue>* property, ::ByRef<TContainer> container, ::ByRef<TValue> value);

  constexpr TSrcValue const& __cordl_internal_get_Value() const;

  constexpr TSrcValue& __cordl_internal_get_Value();

  constexpr ::UnityEngine::UIElements::ConverterGroup* const& __cordl_internal_get__group_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::ConverterGroup*& __cordl_internal_get__group_k__BackingField();

  constexpr void __cordl_internal_set_Value(TSrcValue value);

  constexpr void __cordl_internal_set__group_k__BackingField(::UnityEngine::UIElements::ConverterGroup* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>* getStaticF_Pool();

  /// @brief Method get_group, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ConverterGroup* get_group();

  static inline void setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>* value);

  /// @brief Method set_group, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_group(::UnityEngine::UIElements::ConverterGroup* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetValueVisitor_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetValueVisitor_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetValueVisitor_1(SetValueVisitor_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetValueVisitor_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetValueVisitor_1(SetValueVisitor_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4365 };

  /// @brief Field Value, offset: 0xb8, size: 0x8, def value: None
  TSrcValue ___Value;

  /// @brief Field <group>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::UIElements::ConverterGroup* ____group_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::SetValueVisitor_1, "UnityEngine.UIElements", "SetValueVisitor`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::SetValueVisitor_1___c, "UnityEngine.UIElements", "SetValueVisitor`1/<>c");
