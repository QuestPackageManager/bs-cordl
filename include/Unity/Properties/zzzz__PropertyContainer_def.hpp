#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__PathVisitor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PropertyContainer)
namespace Unity::Properties {
class GetPropertyVisitor_PropertyContainer___c;
}
namespace Unity::Properties {
template <typename TSrcValue> class GetValueVisitor_1_PropertyContainer___c;
}
namespace Unity::Properties {
class IPropertyBagVisitor;
}
namespace Unity::Properties {
class IProperty;
}
namespace Unity::Properties {
class PropertyContainer_GetPropertyVisitor;
}
namespace Unity::Properties {
template <typename TSrcValue> class PropertyContainer_GetValueVisitor_1;
}
namespace Unity::Properties {
struct PropertyPath;
}
namespace Unity::Properties {
template <typename TContainer, typename TValue> class Property_2;
}
namespace Unity::Properties {
struct VisitParameters;
}
namespace Unity::Properties {
struct VisitReturnCode;
}
namespace UnityEngine::Pool {
template <typename T> class ObjectPool_1;
}
// Forward declare root types
namespace Unity::Properties {
class GetPropertyVisitor_PropertyContainer___c;
}
namespace Unity::Properties {
template <typename TSrcValue> class GetValueVisitor_1_PropertyContainer___c;
}
namespace Unity::Properties {
class PropertyContainer;
}
namespace Unity::Properties {
class PropertyContainer_GetPropertyVisitor;
}
namespace Unity::Properties {
template <typename TSrcValue> class PropertyContainer_GetValueVisitor_1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::GetPropertyVisitor_PropertyContainer___c);
MARK_GEN_REF_PTR_T(::Unity::Properties::GetValueVisitor_1_PropertyContainer___c);
MARK_REF_PTR_T(::Unity::Properties::PropertyContainer);
MARK_REF_PTR_T(::Unity::Properties::PropertyContainer_GetPropertyVisitor);
MARK_GEN_REF_PTR_T(::Unity::Properties::PropertyContainer_GetValueVisitor_1);
// Dependencies System.Object
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.PropertyContainer/GetPropertyVisitor/<>c
class CORDL_TYPE GetPropertyVisitor_PropertyContainer___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Unity::Properties::GetPropertyVisitor_PropertyContainer___c* __9;

  static inline ::Unity::Properties::GetPropertyVisitor_PropertyContainer___c* New_ctor();

  /// @brief Method <.cctor>b__5_0, addr 0x696a114, size 0x44, virtual false, abstract: false, final false
  inline ::Unity::Properties::PropertyContainer_GetPropertyVisitor* __cctor_b__5_0();

  /// @brief Method <.cctor>b__5_1, addr 0x696a158, size 0x20, virtual false, abstract: false, final false
  inline void __cctor_b__5_1(::Unity::Properties::PropertyContainer_GetPropertyVisitor* v);

  /// @brief Method .ctor, addr 0x696a110, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Properties::GetPropertyVisitor_PropertyContainer___c* getStaticF___9();

  static inline void setStaticF___9(::Unity::Properties::GetPropertyVisitor_PropertyContainer___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetPropertyVisitor_PropertyContainer___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetPropertyVisitor_PropertyContainer___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetPropertyVisitor_PropertyContainer___c(GetPropertyVisitor_PropertyContainer___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetPropertyVisitor_PropertyContainer___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetPropertyVisitor_PropertyContainer___c(GetPropertyVisitor_PropertyContainer___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19297 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::GetPropertyVisitor_PropertyContainer___c, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
// Dependencies Unity.Properties.PathVisitor
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.PropertyContainer/GetPropertyVisitor
class CORDL_TYPE PropertyContainer_GetPropertyVisitor : public ::Unity::Properties::PathVisitor {
public:
  // Declarations
  using __c = ::Unity::Properties::GetPropertyVisitor_PropertyContainer___c;

  /// @brief Field Pool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pool, put = setStaticF_Pool)) ::UnityEngine::Pool::ObjectPool_1<::Unity::Properties::PropertyContainer_GetPropertyVisitor*>* Pool;

  /// @brief Field Property, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_Property, put = __cordl_internal_set_Property)) ::Unity::Properties::IProperty* Property;

  static inline ::Unity::Properties::PropertyContainer_GetPropertyVisitor* New_ctor();

  /// @brief Method Reset, addr 0x6969ec4, size 0x34, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method VisitPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TContainer, typename TValue> inline void VisitPath(::Unity::Properties::Property_2<TContainer, TValue>* property, ::ByRef<TContainer> container, ::ByRef<TValue> value);

  constexpr ::Unity::Properties::IProperty* const& __cordl_internal_get_Property() const;

  constexpr ::Unity::Properties::IProperty*& __cordl_internal_get_Property();

  constexpr void __cordl_internal_set_Property(::Unity::Properties::IProperty* value);

  /// @brief Method .ctor, addr 0x6969f24, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Pool::ObjectPool_1<::Unity::Properties::PropertyContainer_GetPropertyVisitor*>* getStaticF_Pool();

  static inline void setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::Unity::Properties::PropertyContainer_GetPropertyVisitor*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyContainer_GetPropertyVisitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyContainer_GetPropertyVisitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyContainer_GetPropertyVisitor(PropertyContainer_GetPropertyVisitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyContainer_GetPropertyVisitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyContainer_GetPropertyVisitor(PropertyContainer_GetPropertyVisitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19298 };

  /// @brief Field Property, offset: 0xb8, size: 0x8, def value: None
  ::Unity::Properties::IProperty* ___Property;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::PropertyContainer_GetPropertyVisitor, ___Property) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::PropertyContainer_GetPropertyVisitor, 0xc0>, "Size mismatch!");

} // namespace Unity::Properties
// Dependencies System.Object
namespace Unity::Properties {
// cpp template
template <typename TSrcValue>
// Is value type: false
// CS Name: Unity.Properties.PropertyContainer/GetValueVisitor`1/<>c<TSrcValue>
class CORDL_TYPE GetValueVisitor_1_PropertyContainer___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>* __9;

  static inline ::Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>* New_ctor();

  /// @brief Method <.cctor>b__5_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>* __cctor_b__5_0();

  /// @brief Method <.cctor>b__5_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __cctor_b__5_1(::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>* v);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>* getStaticF___9();

  static inline void setStaticF___9(::Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetValueVisitor_1_PropertyContainer___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetValueVisitor_1_PropertyContainer___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetValueVisitor_1_PropertyContainer___c(GetValueVisitor_1_PropertyContainer___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetValueVisitor_1_PropertyContainer___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetValueVisitor_1_PropertyContainer___c(GetValueVisitor_1_PropertyContainer___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19299 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies Unity.Properties.PathVisitor
namespace Unity::Properties {
// cpp template
template <typename TSrcValue>
// Is value type: false
// CS Name: Unity.Properties.PropertyContainer/GetValueVisitor`1<TSrcValue>
class CORDL_TYPE PropertyContainer_GetValueVisitor_1 : public ::Unity::Properties::PathVisitor {
public:
  // Declarations
  using __c = ::Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>;

  /// @brief Field Pool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pool, put = setStaticF_Pool)) ::UnityEngine::Pool::ObjectPool_1<::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>*>* Pool;

  /// @brief Field Value, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_Value, put = __cordl_internal_set_Value)) TSrcValue Value;

  static inline ::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>* New_ctor();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method VisitPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TContainer, typename TValue> inline void VisitPath(::Unity::Properties::Property_2<TContainer, TValue>* property, ::ByRef<TContainer> container, ::ByRef<TValue> value);

  constexpr TSrcValue const& __cordl_internal_get_Value() const;

  constexpr TSrcValue& __cordl_internal_get_Value();

  constexpr void __cordl_internal_set_Value(TSrcValue value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Pool::ObjectPool_1<::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>*>* getStaticF_Pool();

  static inline void setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyContainer_GetValueVisitor_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyContainer_GetValueVisitor_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyContainer_GetValueVisitor_1(PropertyContainer_GetValueVisitor_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyContainer_GetValueVisitor_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyContainer_GetValueVisitor_1(PropertyContainer_GetValueVisitor_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19300 };

  /// @brief Field Value, offset: 0xb8, size: 0x8, def value: None
  TSrcValue ___Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies System.Object
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.PropertyContainer
class CORDL_TYPE PropertyContainer : public ::System::Object {
public:
  // Declarations
  using GetPropertyVisitor = ::Unity::Properties::PropertyContainer_GetPropertyVisitor;

  template <typename TSrcValue> using GetValueVisitor_1 = ::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>;

  /// @brief Method Accept, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContainer> static inline void Accept(::Unity::Properties::IPropertyBagVisitor* visitor, ::ByRef<TContainer> container, ::Unity::Properties::VisitParameters parameters);

  /// @brief Method TryAccept, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContainer> static inline bool TryAccept(::Unity::Properties::IPropertyBagVisitor* visitor, ::ByRef<TContainer> container, ::Unity::Properties::VisitParameters parameters);

  /// @brief Method TryAccept, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContainer>
  static inline bool TryAccept(::Unity::Properties::IPropertyBagVisitor* visitor, ::ByRef<TContainer> container, ::ByRef<::Unity::Properties::VisitReturnCode> returnCode,
                               ::Unity::Properties::VisitParameters parameters);

  /// @brief Method TryGetProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContainer> static inline bool TryGetProperty(::ByRef<TContainer> container, ::ByRef<::Unity::Properties::PropertyPath> path, ::ByRef<::Unity::Properties::IProperty*> property);

  /// @brief Method TryGetProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContainer>
  static inline bool TryGetProperty(::ByRef<TContainer> container, ::ByRef<::Unity::Properties::PropertyPath> path, ::ByRef<::Unity::Properties::IProperty*> property,
                                    ::ByRef<::Unity::Properties::VisitReturnCode> returnCode);

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContainer, typename TValue> static inline bool TryGetValue(::ByRef<TContainer> container, ::StringW name, ::ByRef<TValue> value);

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContainer, typename TValue>
  static inline bool TryGetValue(::ByRef<TContainer> container, ::ByRef<::Unity::Properties::PropertyPath> path, ::ByRef<TValue> value, ::ByRef<::Unity::Properties::VisitReturnCode> returnCode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyContainer(PropertyContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyContainer(PropertyContainer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19301 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::PropertyContainer, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::GetPropertyVisitor_PropertyContainer___c);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::GetPropertyVisitor_PropertyContainer___c*, "Unity.Properties", "PropertyContainer/GetPropertyVisitor/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::GetValueVisitor_1_PropertyContainer___c, "Unity.Properties", "PropertyContainer/GetValueVisitor`1/<>c");
NEED_NO_BOX(::Unity::Properties::PropertyContainer);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::PropertyContainer*, "Unity.Properties", "PropertyContainer");
NEED_NO_BOX(::Unity::Properties::PropertyContainer_GetPropertyVisitor);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::PropertyContainer_GetPropertyVisitor*, "Unity.Properties", "PropertyContainer/GetPropertyVisitor");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::PropertyContainer_GetValueVisitor_1, "Unity.Properties", "PropertyContainer/GetValueVisitor`1");
