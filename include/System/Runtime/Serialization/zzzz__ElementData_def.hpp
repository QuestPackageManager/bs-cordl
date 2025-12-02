#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ElementData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ElementData)
namespace System::Runtime::Serialization {
class AttributeData;
}
namespace System::Runtime::Serialization {
class IDataNode;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ElementData;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ElementData);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.ElementData
class CORDL_TYPE ElementData : public ::System::Object {
public:
  // Declarations
  /// @brief Field attributeCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_attributeCount, put = __cordl_internal_set_attributeCount)) int32_t attributeCount;

  /// @brief Field attributes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes,
                      put = __cordl_internal_set_attributes)) ::ArrayW<::System::Runtime::Serialization::AttributeData*, ::Array<::System::Runtime::Serialization::AttributeData*>*>
      attributes;

  /// @brief Field childElementIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_childElementIndex, put = __cordl_internal_set_childElementIndex)) int32_t childElementIndex;

  /// @brief Field dataNode, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_dataNode, put = __cordl_internal_set_dataNode)) ::System::Runtime::Serialization::IDataNode* dataNode;

  /// @brief Field localName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_localName, put = __cordl_internal_set_localName)) ::StringW localName;

  /// @brief Field ns, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns)) ::StringW ns;

  /// @brief Field prefix, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_prefix, put = __cordl_internal_set_prefix)) ::StringW prefix;

  /// @brief Method AddAttribute, addr 0x5f342ac, size 0x104, virtual false, abstract: false, final false
  inline void AddAttribute(::StringW prefix, ::StringW ns, ::StringW name, ::StringW value);

  /// @brief Method GrowAttributesIfNeeded, addr 0x5f39148, size 0xb0, virtual false, abstract: false, final false
  inline void GrowAttributesIfNeeded();

  static inline ::System::Runtime::Serialization::ElementData* New_ctor();

  constexpr int32_t const& __cordl_internal_get_attributeCount() const;

  constexpr int32_t& __cordl_internal_get_attributeCount();

  constexpr ::ArrayW<::System::Runtime::Serialization::AttributeData*, ::Array<::System::Runtime::Serialization::AttributeData*>*> const& __cordl_internal_get_attributes() const;

  constexpr ::ArrayW<::System::Runtime::Serialization::AttributeData*, ::Array<::System::Runtime::Serialization::AttributeData*>*>& __cordl_internal_get_attributes();

  constexpr int32_t const& __cordl_internal_get_childElementIndex() const;

  constexpr int32_t& __cordl_internal_get_childElementIndex();

  constexpr ::System::Runtime::Serialization::IDataNode* const& __cordl_internal_get_dataNode() const;

  constexpr ::System::Runtime::Serialization::IDataNode*& __cordl_internal_get_dataNode();

  constexpr ::StringW const& __cordl_internal_get_localName() const;

  constexpr ::StringW& __cordl_internal_get_localName();

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr ::StringW const& __cordl_internal_get_prefix() const;

  constexpr ::StringW& __cordl_internal_get_prefix();

  constexpr void __cordl_internal_set_attributeCount(int32_t value);

  constexpr void __cordl_internal_set_attributes(::ArrayW<::System::Runtime::Serialization::AttributeData*, ::Array<::System::Runtime::Serialization::AttributeData*>*> value);

  constexpr void __cordl_internal_set_childElementIndex(int32_t value);

  constexpr void __cordl_internal_set_dataNode(::System::Runtime::Serialization::IDataNode* value);

  constexpr void __cordl_internal_set_localName(::StringW value);

  constexpr void __cordl_internal_set_ns(::StringW value);

  constexpr void __cordl_internal_set_prefix(::StringW value);

  /// @brief Method .ctor, addr 0x5f39140, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElementData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElementData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElementData(ElementData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElementData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElementData(ElementData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16999 };

  /// @brief Field localName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___localName;

  /// @brief Field ns, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field prefix, offset: 0x20, size: 0x8, def value: None
  ::StringW ___prefix;

  /// @brief Field attributeCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___attributeCount;

  /// @brief Field attributes, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Runtime::Serialization::AttributeData*, ::Array<::System::Runtime::Serialization::AttributeData*>*> ___attributes;

  /// @brief Field dataNode, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::Serialization::IDataNode* ___dataNode;

  /// @brief Field childElementIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ___childElementIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::ElementData, ___localName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ElementData, ___ns) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ElementData, ___prefix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ElementData, ___attributeCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ElementData, ___attributes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ElementData, ___dataNode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ElementData, ___childElementIndex) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ElementData, 0x48>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ElementData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ElementData*, "System.Runtime.Serialization", "ElementData");
