#pragma once
// IWYU pragma private; include "Unity/Properties/PathVisitor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
#include "Unity/Properties/zzzz__VisitReturnCode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PathVisitor)
namespace System {
class IDisposable;
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
struct PathVisitor_PropertyScope;
}
namespace Unity::Properties {
struct PropertyPath;
}
namespace Unity::Properties {
template <typename TContainer, typename TValue> class Property_2;
}
namespace Unity::Properties {
struct VisitReturnCode;
}
// Forward declare root types
namespace Unity::Properties {
class PathVisitor;
}
namespace Unity::Properties {
struct PathVisitor_PropertyScope;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::PathVisitor);
MARK_VAL_T(::Unity::Properties::PathVisitor_PropertyScope);
// Dependencies
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.PathVisitor/PropertyScope
struct CORDL_TYPE PathVisitor_PropertyScope {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x69d6b90, size 0x1c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x69d6b70, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Properties::PathVisitor* visitor, ::Unity::Properties::IProperty* property);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PathVisitor_PropertyScope();

  // Ctor Parameters [CppParam { name: "m_Visitor", ty: "::Unity::Properties::PathVisitor*", modifiers: "", def_value: None }, CppParam { name: "m_Property", ty: "::Unity::Properties::IProperty*",
  // modifiers: "", def_value: None }]
  constexpr PathVisitor_PropertyScope(::Unity::Properties::PathVisitor* m_Visitor, ::Unity::Properties::IProperty* m_Property) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19406 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Visitor, offset: 0x0, size: 0x8, def value: None
  ::Unity::Properties::PathVisitor* m_Visitor;

  /// @brief Field m_Property, offset: 0x8, size: 0x8, def value: None
  ::Unity::Properties::IProperty* m_Property;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::PathVisitor_PropertyScope, m_Visitor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PathVisitor_PropertyScope, m_Property) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::PathVisitor_PropertyScope, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
// Dependencies System.Object, Unity.Properties.PropertyPath, Unity.Properties.VisitReturnCode
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.PathVisitor
class CORDL_TYPE PathVisitor : public ::System::Object {
public:
  // Declarations
  using PropertyScope = ::Unity::Properties::PathVisitor_PropertyScope;

  __declspec(property(get = get_Path, put = set_Path)) ::Unity::Properties::PropertyPath Path;

  __declspec(property(get = get_Property, put = set_Property)) ::Unity::Properties::IProperty* Property;

  __declspec(property(get = get_ReadonlyVisit, put = set_ReadonlyVisit)) bool ReadonlyVisit;

  __declspec(property(get = get_ReturnCode, put = set_ReturnCode)) ::Unity::Properties::VisitReturnCode ReturnCode;

  /// @brief Field <Path>k__BackingField, offset 0x18, size 0x90
  __declspec(property(get = __cordl_internal_get__Path_k__BackingField, put = __cordl_internal_set__Path_k__BackingField)) ::Unity::Properties::PropertyPath _Path_k__BackingField;

  /// @brief Field <Property>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__Property_k__BackingField, put = __cordl_internal_set__Property_k__BackingField)) ::Unity::Properties::IProperty* _Property_k__BackingField;

  /// @brief Field <ReadonlyVisit>k__BackingField, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get__ReadonlyVisit_k__BackingField, put = __cordl_internal_set__ReadonlyVisit_k__BackingField)) bool _ReadonlyVisit_k__BackingField;

  /// @brief Field <ReturnCode>k__BackingField, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get__ReturnCode_k__BackingField, put = __cordl_internal_set__ReturnCode_k__BackingField)) ::Unity::Properties::VisitReturnCode _ReturnCode_k__BackingField;

  /// @brief Field m_PathIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PathIndex, put = __cordl_internal_set_m_PathIndex)) int32_t m_PathIndex;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBagVisitor"
  constexpr operator ::Unity::Properties::IPropertyBagVisitor*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyVisitor"
  constexpr operator ::Unity::Properties::IPropertyVisitor*() noexcept;

  static inline ::Unity::Properties::PathVisitor* New_ctor();

  /// @brief Method Reset, addr 0x69d2d7c, size 0x2c, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Unity.Properties.IPropertyBagVisitor.Visit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TContainer> inline void Unity_Properties_IPropertyBagVisitor_Visit(::Unity::Properties::IPropertyBag_1<TContainer>* properties, ::ByRef<TContainer> container);

  /// @brief Method Unity.Properties.IPropertyVisitor.Visit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TContainer, typename TValue> inline void Unity_Properties_IPropertyVisitor_Visit(::Unity::Properties::Property_2<TContainer, TValue>* property, ::ByRef<TContainer> container);

  /// @brief Method VisitPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TContainer, typename TValue> inline void VisitPath(::Unity::Properties::Property_2<TContainer, TValue>* property, ::ByRef<TContainer> container, ::ByRef<TValue> value);

  constexpr ::Unity::Properties::PropertyPath const& __cordl_internal_get__Path_k__BackingField() const;

  constexpr ::Unity::Properties::PropertyPath& __cordl_internal_get__Path_k__BackingField();

  constexpr ::Unity::Properties::IProperty* const& __cordl_internal_get__Property_k__BackingField() const;

  constexpr ::Unity::Properties::IProperty*& __cordl_internal_get__Property_k__BackingField();

  constexpr bool const& __cordl_internal_get__ReadonlyVisit_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ReadonlyVisit_k__BackingField();

  constexpr ::Unity::Properties::VisitReturnCode const& __cordl_internal_get__ReturnCode_k__BackingField() const;

  constexpr ::Unity::Properties::VisitReturnCode& __cordl_internal_get__ReturnCode_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_PathIndex() const;

  constexpr int32_t& __cordl_internal_get_m_PathIndex();

  constexpr void __cordl_internal_set__Path_k__BackingField(::Unity::Properties::PropertyPath value);

  constexpr void __cordl_internal_set__Property_k__BackingField(::Unity::Properties::IProperty* value);

  constexpr void __cordl_internal_set__ReadonlyVisit_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ReturnCode_k__BackingField(::Unity::Properties::VisitReturnCode value);

  constexpr void __cordl_internal_set_m_PathIndex(int32_t value);

  /// @brief Method .ctor, addr 0x69d2dac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Path, addr 0x69d6b24, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Properties::PropertyPath get_Path();

  /// @brief Method get_Property, addr 0x69d6b40, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Properties::IProperty* get_Property();

  /// @brief Method get_ReadonlyVisit, addr 0x69d6b50, size 0x8, virtual false, abstract: false, final false
  inline bool get_ReadonlyVisit();

  /// @brief Method get_ReturnCode, addr 0x69d6b60, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Properties::VisitReturnCode get_ReturnCode();

  /// @brief Convert to "::Unity::Properties::IPropertyBagVisitor"
  constexpr ::Unity::Properties::IPropertyBagVisitor* i___Unity__Properties__IPropertyBagVisitor() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyVisitor"
  constexpr ::Unity::Properties::IPropertyVisitor* i___Unity__Properties__IPropertyVisitor() noexcept;

  /// @brief Method set_Path, addr 0x69d6b34, size 0xc, virtual false, abstract: false, final false
  inline void set_Path(::Unity::Properties::PropertyPath value);

  /// @brief Method set_Property, addr 0x69d6b48, size 0x8, virtual false, abstract: false, final false
  inline void set_Property(::Unity::Properties::IProperty* value);

  /// @brief Method set_ReadonlyVisit, addr 0x69d6b58, size 0x8, virtual false, abstract: false, final false
  inline void set_ReadonlyVisit(bool value);

  /// @brief Method set_ReturnCode, addr 0x69d6b68, size 0x8, virtual false, abstract: false, final false
  inline void set_ReturnCode(::Unity::Properties::VisitReturnCode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PathVisitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PathVisitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PathVisitor(PathVisitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PathVisitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PathVisitor(PathVisitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19407 };

  /// @brief Field m_PathIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_PathIndex;

  /// @brief Field <Path>k__BackingField, offset: 0x18, size: 0x90, def value: None
  ::Unity::Properties::PropertyPath ____Path_k__BackingField;

  /// @brief Field <Property>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::Unity::Properties::IProperty* ____Property_k__BackingField;

  /// @brief Field <ReadonlyVisit>k__BackingField, offset: 0xb0, size: 0x1, def value: None
  bool ____ReadonlyVisit_k__BackingField;

  /// @brief Field <ReturnCode>k__BackingField, offset: 0xb4, size: 0x4, def value: None
  ::Unity::Properties::VisitReturnCode ____ReturnCode_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::PathVisitor, ___m_PathIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PathVisitor, ____Path_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PathVisitor, ____Property_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PathVisitor, ____ReadonlyVisit_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PathVisitor, ____ReturnCode_k__BackingField) == 0xb4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::PathVisitor, 0xb8>, "Size mismatch!");

} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::PathVisitor);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::PathVisitor*, "Unity.Properties", "PathVisitor");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::PathVisitor_PropertyScope, "Unity.Properties", "PathVisitor/PropertyScope");
