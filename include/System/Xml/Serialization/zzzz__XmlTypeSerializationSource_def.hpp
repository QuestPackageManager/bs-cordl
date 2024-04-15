#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__SerializationSource_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTypeSerializationSource)
namespace System::Xml::Serialization {
class XmlAttributeOverrides;
}
namespace System::Xml::Serialization {
class XmlRootAttribute;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlTypeSerializationSource;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlTypeSerializationSource);
// Type: System.Xml.Serialization::XmlTypeSerializationSource
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlTypeSerializationSource*
class CORDL_TYPE XmlTypeSerializationSource : public ::System::Xml::Serialization::SerializationSource {
public:
  // Declarations
  /// @brief Field attributeOverridesHash, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeOverridesHash, put = __cordl_internal_set_attributeOverridesHash))::StringW attributeOverridesHash;

  /// @brief Field rootHash, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_rootHash, put = __cordl_internal_set_rootHash))::StringW rootHash;

  /// @brief Field type, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Type* type;

  /// @brief Method Equals, addr 0x2dc66dc, size 0xe0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode, addr 0x2dc67bc, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Xml::Serialization::XmlTypeSerializationSource* New_ctor(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                   ::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides, ::StringW namspace,
                                                                                   ::ArrayW<::System::Type*, ::Array<::System::Type*>*> includedTypes);

  constexpr ::StringW const& __cordl_internal_get_attributeOverridesHash() const;

  constexpr ::StringW& __cordl_internal_get_attributeOverridesHash();

  constexpr ::StringW const& __cordl_internal_get_rootHash() const;

  constexpr ::StringW& __cordl_internal_get_rootHash();

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

  constexpr void __cordl_internal_set_attributeOverridesHash(::StringW value);

  constexpr void __cordl_internal_set_rootHash(::StringW value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x2dc65d8, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root, ::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides, ::StringW namspace,
                    ::ArrayW<::System::Type*, ::Array<::System::Type*>*> includedTypes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTypeSerializationSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeSerializationSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTypeSerializationSource(XmlTypeSerializationSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeSerializationSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTypeSerializationSource(XmlTypeSerializationSource const&) = delete;

  /// @brief Field attributeOverridesHash, offset: 0x28, size: 0x8, def value: None
  ::StringW ___attributeOverridesHash;

  /// @brief Field type, offset: 0x30, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field rootHash, offset: 0x38, size: 0x8, def value: None
  ::StringW ___rootHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlTypeSerializationSource, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeSerializationSource, ___attributeOverridesHash) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeSerializationSource, ___type) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeSerializationSource, ___rootHash) == 0x38, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeSerializationSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeSerializationSource*, "System.Xml.Serialization", "XmlTypeSerializationSource");
