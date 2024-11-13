#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UxmlAsset)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlAsset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlAsset);
// Type: UnityEngine.UIElements::UxmlAsset
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UxmlAsset*
class CORDL_TYPE UxmlAsset : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_fullTypeName)) ::StringW fullTypeName;

  __declspec(property(get = get_id)) int32_t id;

  /// @brief Field m_FullTypeName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FullTypeName, put = __cordl_internal_set_m_FullTypeName)) ::StringW m_FullTypeName;

  /// @brief Field m_Id, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Id, put = __cordl_internal_set_m_Id)) int32_t m_Id;

  /// @brief Field m_OrderInDocument, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OrderInDocument, put = __cordl_internal_set_m_OrderInDocument)) int32_t m_OrderInDocument;

  /// @brief Field m_ParentId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ParentId, put = __cordl_internal_set_m_ParentId)) int32_t m_ParentId;

  /// @brief Field m_Properties, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Properties, put = __cordl_internal_set_m_Properties)) ::System::Collections::Generic::List_1<::StringW>* m_Properties;

  __declspec(property(get = get_orderInDocument)) int32_t orderInDocument;

  __declspec(property(get = get_parentId)) int32_t parentId;

  /// @brief Convert operator to "::UnityEngine::UIElements::IUxmlAttributes"
  constexpr operator ::UnityEngine::UIElements::IUxmlAttributes*() noexcept;

  /// @brief Method SetAttribute, addr 0x4a3cfa0, size 0x4, virtual false, abstract: false, final false
  inline void SetAttribute(::StringW name, ::StringW value);

  /// @brief Method SetOrAddProperty, addr 0x4a3cfa4, size 0x1f8, virtual false, abstract: false, final false
  inline void SetOrAddProperty(::StringW propertyName, ::StringW propertyValue);

  /// @brief Method TryGetAttributeValue, addr 0x4a3ced0, size 0xd0, virtual true, abstract: false, final true
  inline bool TryGetAttributeValue(::StringW propertyName, ByRef<::StringW> value);

  constexpr ::StringW const& __cordl_internal_get_m_FullTypeName() const;

  constexpr ::StringW& __cordl_internal_get_m_FullTypeName();

  constexpr int32_t const& __cordl_internal_get_m_Id() const;

  constexpr int32_t& __cordl_internal_get_m_Id();

  constexpr int32_t const& __cordl_internal_get_m_OrderInDocument() const;

  constexpr int32_t& __cordl_internal_get_m_OrderInDocument();

  constexpr int32_t const& __cordl_internal_get_m_ParentId() const;

  constexpr int32_t& __cordl_internal_get_m_ParentId();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_Properties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_m_Properties() const;

  constexpr void __cordl_internal_set_m_FullTypeName(::StringW value);

  constexpr void __cordl_internal_set_m_Id(int32_t value);

  constexpr void __cordl_internal_set_m_OrderInDocument(int32_t value);

  constexpr void __cordl_internal_set_m_ParentId(int32_t value);

  constexpr void __cordl_internal_set_m_Properties(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method get_fullTypeName, addr 0x4a3ceb0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_fullTypeName();

  /// @brief Method get_id, addr 0x4a3ceb8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_id();

  /// @brief Method get_orderInDocument, addr 0x4a3cec0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_orderInDocument();

  /// @brief Method get_parentId, addr 0x4a3cec8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_parentId();

  /// @brief Convert to "::UnityEngine::UIElements::IUxmlAttributes"
  constexpr ::UnityEngine::UIElements::IUxmlAttributes* i___UnityEngine__UIElements__IUxmlAttributes() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlAsset(UxmlAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlAsset(UxmlAsset const&) = delete;

  /// @brief Field m_FullTypeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_FullTypeName;

  /// @brief Field m_Id, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Id;

  /// @brief Field m_OrderInDocument, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_OrderInDocument;

  /// @brief Field m_ParentId, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_ParentId;

  /// @brief Field m_Properties, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_Properties;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6251 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlAsset, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAsset, ___m_FullTypeName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAsset, ___m_Id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAsset, ___m_OrderInDocument) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAsset, ___m_ParentId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAsset, ___m_Properties) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlAsset*, "UnityEngine.UIElements", "UxmlAsset");
