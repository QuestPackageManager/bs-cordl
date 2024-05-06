#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/MetaData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(MetaData)
namespace Org::BouncyCastle::Asn1::Cms {
class Attributes;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerBoolean;
}
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtf8String;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class MetaData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::MetaData);
// Type: Org.BouncyCastle.Asn1.Cms::MetaData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cms::MetaData*
class CORDL_TYPE MetaData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_FileName))::Org::BouncyCastle::Asn1::DerUtf8String* FileName;

  __declspec(property(get = get_IsHashProtected)) bool IsHashProtected;

  __declspec(property(get = get_MediaType))::Org::BouncyCastle::Asn1::DerIA5String* MediaType;

  __declspec(property(get = get_OtherMetaData))::Org::BouncyCastle::Asn1::Cms::Attributes* OtherMetaData;

  /// @brief Field fileName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_fileName, put = __cordl_internal_set_fileName))::Org::BouncyCastle::Asn1::DerUtf8String* fileName;

  /// @brief Field hashProtected, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_hashProtected, put = __cordl_internal_set_hashProtected))::Org::BouncyCastle::Asn1::DerBoolean* hashProtected;

  /// @brief Field mediaType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mediaType, put = __cordl_internal_set_mediaType))::Org::BouncyCastle::Asn1::DerIA5String* mediaType;

  /// @brief Field otherMetaData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_otherMetaData, put = __cordl_internal_set_otherMetaData))::Org::BouncyCastle::Asn1::Cms::Attributes* otherMetaData;

  /// @brief Method GetInstance, addr 0x10d908c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::MetaData* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::MetaData* New_ctor(::Org::BouncyCastle::Asn1::DerBoolean* hashProtected, ::Org::BouncyCastle::Asn1::DerUtf8String* fileName,
                                                                   ::Org::BouncyCastle::Asn1::DerIA5String* mediaType, ::Org::BouncyCastle::Asn1::Cms::Attributes* otherMetaData);

  static inline ::Org::BouncyCastle::Asn1::Cms::MetaData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x10d9130, size 0x1a0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerUtf8String*& __cordl_internal_get_fileName();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerUtf8String*> const& __cordl_internal_get_fileName() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBoolean*& __cordl_internal_get_hashProtected();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBoolean*> const& __cordl_internal_get_hashProtected() const;

  constexpr ::Org::BouncyCastle::Asn1::DerIA5String*& __cordl_internal_get_mediaType();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerIA5String*> const& __cordl_internal_get_mediaType() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::Attributes*& __cordl_internal_get_otherMetaData();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::Attributes*> const& __cordl_internal_get_otherMetaData() const;

  constexpr void __cordl_internal_set_fileName(::Org::BouncyCastle::Asn1::DerUtf8String* value);

  constexpr void __cordl_internal_set_hashProtected(::Org::BouncyCastle::Asn1::DerBoolean* value);

  constexpr void __cordl_internal_set_mediaType(::Org::BouncyCastle::Asn1::DerIA5String* value);

  constexpr void __cordl_internal_set_otherMetaData(::Org::BouncyCastle::Asn1::Cms::Attributes* value);

  /// @brief Method .ctor, addr 0x10d8e38, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerBoolean* hashProtected, ::Org::BouncyCastle::Asn1::DerUtf8String* fileName, ::Org::BouncyCastle::Asn1::DerIA5String* mediaType,
                    ::Org::BouncyCastle::Asn1::Cms::Attributes* otherMetaData);

  /// @brief Method .ctor, addr 0x10d8e78, size 0x214, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_FileName, addr 0x10d92ec, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerUtf8String* get_FileName();

  /// @brief Method get_IsHashProtected, addr 0x10d92d0, size 0x1c, virtual true, abstract: false, final false
  inline bool get_IsHashProtected();

  /// @brief Method get_MediaType, addr 0x10d92f4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerIA5String* get_MediaType();

  /// @brief Method get_OtherMetaData, addr 0x10d92fc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::Attributes* get_OtherMetaData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaData(MetaData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaData(MetaData const&) = delete;

  /// @brief Field hashProtected, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBoolean* ___hashProtected;

  /// @brief Field fileName, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerUtf8String* ___fileName;

  /// @brief Field mediaType, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerIA5String* ___mediaType;

  /// @brief Field otherMetaData, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::Attributes* ___otherMetaData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::MetaData, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::MetaData, ___hashProtected) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::MetaData, ___fileName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::MetaData, ___mediaType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::MetaData, ___otherMetaData) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::MetaData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::MetaData*, "Org.BouncyCastle.Asn1.Cms", "MetaData");
