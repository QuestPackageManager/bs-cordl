#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/TypePathVisitor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
#include "Unity/Properties/zzzz__VisitReturnCode_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypePathVisitor)
namespace System {
class Type;
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
class ITypeVisitor;
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
namespace UnityEngine::UIElements::Internal {
class TypePathVisitor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::TypePathVisitor);
// Dependencies System.Object, Unity.Properties.PropertyPath, Unity.Properties.VisitReturnCode
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: UnityEngine.UIElements.Internal.TypePathVisitor
class CORDL_TYPE TypePathVisitor : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Path, put = set_Path)) ::Unity::Properties::PropertyPath Path;

  __declspec(property(get = get_ReturnCode, put = set_ReturnCode)) ::Unity::Properties::VisitReturnCode ReturnCode;

  /// @brief Field <Path>k__BackingField, offset 0x10, size 0x90
  __declspec(property(get = __cordl_internal_get__Path_k__BackingField, put = __cordl_internal_set__Path_k__BackingField)) ::Unity::Properties::PropertyPath _Path_k__BackingField;

  /// @brief Field <ReturnCode>k__BackingField, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get__ReturnCode_k__BackingField, put = __cordl_internal_set__ReturnCode_k__BackingField)) ::Unity::Properties::VisitReturnCode _ReturnCode_k__BackingField;

  /// @brief Field <resolvedType>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__resolvedType_k__BackingField, put = __cordl_internal_set__resolvedType_k__BackingField)) ::System::Type* _resolvedType_k__BackingField;

  /// @brief Field m_LastType, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastType, put = __cordl_internal_set_m_LastType)) ::System::Type* m_LastType;

  /// @brief Field m_PathIndex, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PathIndex, put = __cordl_internal_set_m_PathIndex)) int32_t m_PathIndex;

  __declspec(property(put = set_resolvedType)) ::System::Type* resolvedType;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBagVisitor"
  constexpr operator ::Unity::Properties::IPropertyBagVisitor*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyVisitor"
  constexpr operator ::Unity::Properties::IPropertyVisitor*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::ITypeVisitor"
  constexpr operator ::Unity::Properties::ITypeVisitor*() noexcept;

  /// @brief Method GetElementType, addr 0x6aec490, size 0x1c4, virtual false, abstract: false, final false
  static inline ::System::Type* GetElementType(::System::Type* type);

  /// @brief Method IsLastPartReached, addr 0x6aec424, size 0x6c, virtual false, abstract: false, final false
  inline bool IsLastPartReached();

  static inline ::UnityEngine::UIElements::Internal::TypePathVisitor* New_ctor();

  /// @brief Method Reset, addr 0x6aec408, size 0x1c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Unity.Properties.IPropertyBagVisitor.Visit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TContainer> inline void Unity_Properties_IPropertyBagVisitor_Visit(::Unity::Properties::IPropertyBag_1<TContainer>* properties, ::ByRef<TContainer> container);

  /// @brief Method Unity.Properties.IPropertyVisitor.Visit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TContainer, typename TValue> inline void Unity_Properties_IPropertyVisitor_Visit(::Unity::Properties::Property_2<TContainer, TValue>* property, ::ByRef<TContainer> container);

  /// @brief Method Unity.Properties.ITypeVisitor.Visit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TContainer> inline void Unity_Properties_ITypeVisitor_Visit();

  constexpr ::Unity::Properties::PropertyPath const& __cordl_internal_get__Path_k__BackingField() const;

  constexpr ::Unity::Properties::PropertyPath& __cordl_internal_get__Path_k__BackingField();

  constexpr ::Unity::Properties::VisitReturnCode const& __cordl_internal_get__ReturnCode_k__BackingField() const;

  constexpr ::Unity::Properties::VisitReturnCode& __cordl_internal_get__ReturnCode_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__resolvedType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__resolvedType_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get_m_LastType() const;

  constexpr ::System::Type*& __cordl_internal_get_m_LastType();

  constexpr int32_t const& __cordl_internal_get_m_PathIndex() const;

  constexpr int32_t& __cordl_internal_get_m_PathIndex();

  constexpr void __cordl_internal_set__Path_k__BackingField(::Unity::Properties::PropertyPath value);

  constexpr void __cordl_internal_set__ReturnCode_k__BackingField(::Unity::Properties::VisitReturnCode value);

  constexpr void __cordl_internal_set__resolvedType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set_m_LastType(::System::Type* value);

  constexpr void __cordl_internal_set_m_PathIndex(int32_t value);

  /// @brief Method .ctor, addr 0x6aec654, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Path, addr 0x6aec3d4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Properties::PropertyPath get_Path();

  /// @brief Method get_ReturnCode, addr 0x6aec3f8, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Properties::VisitReturnCode get_ReturnCode();

  /// @brief Convert to "::Unity::Properties::IPropertyBagVisitor"
  constexpr ::Unity::Properties::IPropertyBagVisitor* i___Unity__Properties__IPropertyBagVisitor() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyVisitor"
  constexpr ::Unity::Properties::IPropertyVisitor* i___Unity__Properties__IPropertyVisitor() noexcept;

  /// @brief Convert to "::Unity::Properties::ITypeVisitor"
  constexpr ::Unity::Properties::ITypeVisitor* i___Unity__Properties__ITypeVisitor() noexcept;

  /// @brief Method set_Path, addr 0x6aec3e4, size 0xc, virtual false, abstract: false, final false
  inline void set_Path(::Unity::Properties::PropertyPath value);

  /// @brief Method set_ReturnCode, addr 0x6aec400, size 0x8, virtual false, abstract: false, final false
  inline void set_ReturnCode(::Unity::Properties::VisitReturnCode value);

  /// @brief Method set_resolvedType, addr 0x6aec3f0, size 0x8, virtual false, abstract: false, final false
  inline void set_resolvedType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypePathVisitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypePathVisitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypePathVisitor(TypePathVisitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypePathVisitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypePathVisitor(TypePathVisitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5509 };

  /// @brief Field <Path>k__BackingField, offset: 0x10, size: 0x90, def value: None
  ::Unity::Properties::PropertyPath ____Path_k__BackingField;

  /// @brief Field <resolvedType>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::System::Type* ____resolvedType_k__BackingField;

  /// @brief Field <ReturnCode>k__BackingField, offset: 0xa8, size: 0x4, def value: None
  ::Unity::Properties::VisitReturnCode ____ReturnCode_k__BackingField;

  /// @brief Field m_LastType, offset: 0xb0, size: 0x8, def value: None
  ::System::Type* ___m_LastType;

  /// @brief Field m_PathIndex, offset: 0xb8, size: 0x4, def value: None
  int32_t ___m_PathIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Internal::TypePathVisitor, ____Path_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::TypePathVisitor, ____resolvedType_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::TypePathVisitor, ____ReturnCode_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::TypePathVisitor, ___m_LastType) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::TypePathVisitor, ___m_PathIndex) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::TypePathVisitor, 0xc0>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Internal
NEED_NO_BOX(::UnityEngine::UIElements::Internal::TypePathVisitor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::TypePathVisitor*, "UnityEngine.UIElements.Internal", "TypePathVisitor");
