#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/AutoCompletePathVisitor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AutoCompletePathVisitor)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Type;
}
namespace Unity::Properties {
class IListPropertyVisitor;
}
namespace Unity::Properties {
class IPropertyBagVisitor;
}
namespace Unity::Properties {
template <typename TContainer> class IPropertyBag_1;
}
namespace Unity::Properties {
class IPropertyVisitor;
}
namespace Unity::Properties {
class IProperty;
}
namespace Unity::Properties {
class ITypeVisitor;
}
namespace Unity::Properties {
struct PropertyPath;
}
namespace Unity::Properties {
template <typename TContainer, typename TValue> class Property_2;
}
namespace UnityEngine::UIElements::Internal {
template <typename TContainer> struct AutoCompletePathVisitor_InspectedTypeScope_1;
}
namespace UnityEngine::UIElements::Internal {
class AutoCompletePathVisitor_VisitContext;
}
namespace UnityEngine::UIElements::Internal {
struct AutoCompletePathVisitor_VisitedPropertyScope;
}
namespace UnityEngine::UIElements {
struct PropertyPathInfo;
}
// Forward declare root types
namespace UnityEngine::UIElements::Internal {
class AutoCompletePathVisitor;
}
namespace UnityEngine::UIElements::Internal {
class AutoCompletePathVisitor_VisitContext;
}
namespace UnityEngine::UIElements::Internal {
template <typename TContainer> struct AutoCompletePathVisitor_InspectedTypeScope_1;
}
namespace UnityEngine::UIElements::Internal {
struct AutoCompletePathVisitor_VisitedPropertyScope;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor);
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext);
MARK_GEN_VAL_T(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_InspectedTypeScope_1);
MARK_VAL_T(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope);
// Dependencies System.Object, Unity.Properties.PropertyPath
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: UnityEngine.UIElements.Internal.AutoCompletePathVisitor/VisitContext
class CORDL_TYPE AutoCompletePathVisitor_VisitContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field <currentDepth>k__BackingField, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get__currentDepth_k__BackingField, put = __cordl_internal_set__currentDepth_k__BackingField)) int32_t _currentDepth_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0x20, size 0x90
  __declspec(property(get = __cordl_internal_get__current_k__BackingField, put = __cordl_internal_set__current_k__BackingField)) ::Unity::Properties::PropertyPath _current_k__BackingField;

  /// @brief Field <propertyPathInfos>k__BackingField, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__propertyPathInfos_k__BackingField,
      put = __cordl_internal_set__propertyPathInfos_k__BackingField)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::PropertyPathInfo>* _propertyPathInfos_k__BackingField;

  /// @brief Field <types>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__types_k__BackingField,
                      put = __cordl_internal_set__types_k__BackingField)) ::System::Collections::Generic::HashSet_1<::System::Type*>* _types_k__BackingField;

  __declspec(property(get = get_current, put = set_current)) ::Unity::Properties::PropertyPath current;

  __declspec(property(get = get_currentDepth, put = set_currentDepth)) int32_t currentDepth;

  __declspec(property(get = get_propertyPathInfos, put = set_propertyPathInfos)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::PropertyPathInfo>* propertyPathInfos;

  __declspec(property(get = get_types)) ::System::Collections::Generic::HashSet_1<::System::Type*>* types;

  static inline ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext* New_ctor();

  constexpr int32_t const& __cordl_internal_get__currentDepth_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__currentDepth_k__BackingField();

  constexpr ::Unity::Properties::PropertyPath const& __cordl_internal_get__current_k__BackingField() const;

  constexpr ::Unity::Properties::PropertyPath& __cordl_internal_get__current_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::PropertyPathInfo>* const& __cordl_internal_get__propertyPathInfos_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::PropertyPathInfo>*& __cordl_internal_get__propertyPathInfos_k__BackingField();

  constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>* const& __cordl_internal_get__types_k__BackingField() const;

  constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>*& __cordl_internal_get__types_k__BackingField();

  constexpr void __cordl_internal_set__currentDepth_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__current_k__BackingField(::Unity::Properties::PropertyPath value);

  constexpr void __cordl_internal_set__propertyPathInfos_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::UIElements::PropertyPathInfo>* value);

  constexpr void __cordl_internal_set__types_k__BackingField(::System::Collections::Generic::HashSet_1<::System::Type*>* value);

  /// @brief Method .ctor, addr 0x6b54f38, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_current, addr 0x6b54fc4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Properties::PropertyPath get_current();

  /// @brief Method get_currentDepth, addr 0x6b54fe0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_currentDepth();

  /// @brief Method get_propertyPathInfos, addr 0x6b54fac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::PropertyPathInfo>* get_propertyPathInfos();

  /// @brief Method get_types, addr 0x6b54fbc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::System::Type*>* get_types();

  /// @brief Method set_current, addr 0x6b54fd4, size 0xc, virtual false, abstract: false, final false
  inline void set_current(::Unity::Properties::PropertyPath value);

  /// @brief Method set_currentDepth, addr 0x6b54fe8, size 0x8, virtual false, abstract: false, final false
  inline void set_currentDepth(int32_t value);

  /// @brief Method set_propertyPathInfos, addr 0x6b54fb4, size 0x8, virtual false, abstract: false, final false
  inline void set_propertyPathInfos(::System::Collections::Generic::List_1<::UnityEngine::UIElements::PropertyPathInfo>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoCompletePathVisitor_VisitContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutoCompletePathVisitor_VisitContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoCompletePathVisitor_VisitContext(AutoCompletePathVisitor_VisitContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoCompletePathVisitor_VisitContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoCompletePathVisitor_VisitContext(AutoCompletePathVisitor_VisitContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5505 };

  /// @brief Field <propertyPathInfos>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::PropertyPathInfo>* ____propertyPathInfos_k__BackingField;

  /// @brief Field <types>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Type*>* ____types_k__BackingField;

  /// @brief Field <current>k__BackingField, offset: 0x20, size: 0x90, def value: None
  ::Unity::Properties::PropertyPath ____current_k__BackingField;

  /// @brief Field <currentDepth>k__BackingField, offset: 0xb0, size: 0x4, def value: None
  int32_t ____currentDepth_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext, ____propertyPathInfos_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext, ____types_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext, ____current_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext, ____currentDepth_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Internal
// Dependencies
namespace UnityEngine::UIElements::Internal {
// cpp template
template <typename TContainer>
// Is value type: true
// CS Name: UnityEngine.UIElements.Internal.AutoCompletePathVisitor/InspectedTypeScope`1<TContainer>
struct CORDL_TYPE AutoCompletePathVisitor_InspectedTypeScope_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext* context);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoCompletePathVisitor_InspectedTypeScope_1();

  // Ctor Parameters [CppParam { name: "m_VisitContext", ty: "::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*", modifiers: "", def_value: None }]
  constexpr AutoCompletePathVisitor_InspectedTypeScope_1(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext* m_VisitContext) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5506 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_VisitContext, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext* m_VisitContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::Internal
// Dependencies
namespace UnityEngine::UIElements::Internal {
// Is value type: true
// CS Name: UnityEngine.UIElements.Internal.AutoCompletePathVisitor/VisitedPropertyScope
struct CORDL_TYPE AutoCompletePathVisitor_VisitedPropertyScope {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6b551dc, size 0x7c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x6b54d48, size 0x198, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext* context, int32_t index, ::System::Type* type);

  /// @brief Method .ctor, addr 0x6b54ff0, size 0x1ec, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext* context, ::Unity::Properties::IProperty* property);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoCompletePathVisitor_VisitedPropertyScope();

  // Ctor Parameters [CppParam { name: "m_VisitContext", ty: "::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*", modifiers: "", def_value: None }]
  constexpr AutoCompletePathVisitor_VisitedPropertyScope(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext* m_VisitContext) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5507 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_VisitContext, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext* m_VisitContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope, m_VisitContext) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Internal
// Dependencies System.Object
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: UnityEngine.UIElements.Internal.AutoCompletePathVisitor
class CORDL_TYPE AutoCompletePathVisitor : public ::System::Object {
public:
  // Declarations
  template <typename TContainer> using InspectedTypeScope_1 = ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_InspectedTypeScope_1<TContainer>;

  using VisitContext = ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext;

  using VisitedPropertyScope = ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope;

  /// @brief Field <maxDepth>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__maxDepth_k__BackingField, put = __cordl_internal_set__maxDepth_k__BackingField)) int32_t _maxDepth_k__BackingField;

  /// @brief Field m_VisitContext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisitContext, put = __cordl_internal_set_m_VisitContext)) ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext* m_VisitContext;

  __declspec(property(get = get_maxDepth)) int32_t maxDepth;

  /// @brief Convert operator to "::Unity::Properties::IListPropertyVisitor"
  constexpr operator ::Unity::Properties::IListPropertyVisitor*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBagVisitor"
  constexpr operator ::Unity::Properties::IPropertyBagVisitor*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyVisitor"
  constexpr operator ::Unity::Properties::IPropertyVisitor*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::ITypeVisitor"
  constexpr operator ::Unity::Properties::ITypeVisitor*() noexcept;

  /// @brief Method HasReachedEnd, addr 0x6b5481c, size 0x90, virtual false, abstract: false, final false
  inline bool HasReachedEnd(::System::Type* containerType);

  static inline ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor* New_ctor();

  /// @brief Method Reset, addr 0x6b548ac, size 0x88, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Unity.Properties.IListPropertyVisitor.Visit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TContainer, typename TList, typename TElement>
  inline void Unity_Properties_IListPropertyVisitor_Visit(::Unity::Properties::Property_2<TContainer, TList>* property, ::ByRef<TContainer> container, ::ByRef<TList> list);

  /// @brief Method Unity.Properties.IPropertyBagVisitor.Visit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TContainer> inline void Unity_Properties_IPropertyBagVisitor_Visit(::Unity::Properties::IPropertyBag_1<TContainer>* properties, ::ByRef<TContainer> container);

  /// @brief Method Unity.Properties.IPropertyVisitor.Visit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TContainer, typename TValue> inline void Unity_Properties_IPropertyVisitor_Visit(::Unity::Properties::Property_2<TContainer, TValue>* property, ::ByRef<TContainer> container);

  /// @brief Method Unity.Properties.ITypeVisitor.Visit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TContainer> inline void Unity_Properties_ITypeVisitor_Visit();

  /// @brief Method VisitPropertyType, addr 0x6b54934, size 0x414, virtual false, abstract: false, final false
  inline void VisitPropertyType(::System::Type* type);

  constexpr int32_t const& __cordl_internal_get__maxDepth_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__maxDepth_k__BackingField();

  constexpr ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext* const& __cordl_internal_get_m_VisitContext() const;

  constexpr ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*& __cordl_internal_get_m_VisitContext();

  constexpr void __cordl_internal_set__maxDepth_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_VisitContext(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext* value);

  /// @brief Method .ctor, addr 0x6b54ee0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_maxDepth, addr 0x6b54814, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxDepth();

  /// @brief Convert to "::Unity::Properties::IListPropertyVisitor"
  constexpr ::Unity::Properties::IListPropertyVisitor* i___Unity__Properties__IListPropertyVisitor() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyBagVisitor"
  constexpr ::Unity::Properties::IPropertyBagVisitor* i___Unity__Properties__IPropertyBagVisitor() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyVisitor"
  constexpr ::Unity::Properties::IPropertyVisitor* i___Unity__Properties__IPropertyVisitor() noexcept;

  /// @brief Convert to "::Unity::Properties::ITypeVisitor"
  constexpr ::Unity::Properties::ITypeVisitor* i___Unity__Properties__ITypeVisitor() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoCompletePathVisitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutoCompletePathVisitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoCompletePathVisitor(AutoCompletePathVisitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoCompletePathVisitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoCompletePathVisitor(AutoCompletePathVisitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5508 };

  /// @brief Field m_VisitContext, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext* ___m_VisitContext;

  /// @brief Field <maxDepth>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____maxDepth_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor, ___m_VisitContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor, ____maxDepth_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Internal
NEED_NO_BOX(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*, "UnityEngine.UIElements.Internal", "AutoCompletePathVisitor");
NEED_NO_BOX(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*, "UnityEngine.UIElements.Internal", "AutoCompletePathVisitor/VisitContext");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_InspectedTypeScope_1, "UnityEngine.UIElements.Internal",
                                      "AutoCompletePathVisitor/InspectedTypeScope`1");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope, "UnityEngine.UIElements.Internal", "AutoCompletePathVisitor/VisitedPropertyScope");
