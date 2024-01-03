#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsProcessableByteArray)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsReadable;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsProcessableByteArray;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsProcessableByteArray);
// Type: Org.BouncyCastle.Cms::CmsProcessableByteArray
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(645))
// CS Name: ::Org.BouncyCastle.Cms::CmsProcessableByteArray*
class CORDL_TYPE CmsProcessableByteArray : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __get_type, put = __set_type))::Org::BouncyCastle::Asn1::DerObjectIdentifier* type;

  /// @brief Field bytes, offset 0x18, size 0x8
  __declspec(property(get = __get_bytes, put = __set_bytes))::ArrayW<uint8_t, ::Array<uint8_t>*> bytes;

  __declspec(property(get = get_Type))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Type;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsProcessable"
  constexpr operator ::Org::BouncyCastle::Cms::CmsProcessable*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsReadable"
  constexpr operator ::Org::BouncyCastle::Cms::CmsReadable*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_type();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_type() const;

  constexpr void __set_type(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_bytes();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_bytes() const;

  constexpr void __set_bytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Cms::CmsProcessableByteArray* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method .ctor, addr 0x11e5024, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  static inline ::Org::BouncyCastle::Cms::CmsProcessableByteArray* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* type, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method .ctor, addr 0x11e509c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* type, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method get_Type, addr 0x11e50c8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Type();

  /// @brief Method GetInputStream, addr 0x11e50d0, size 0x6c, virtual true, abstract: false, final false
  inline ::System::IO::Stream* GetInputStream();

  /// @brief Method Write, addr 0x11e513c, size 0x38, virtual true, abstract: false, final false
  inline void Write(::System::IO::Stream* zOut);

  /// @brief Method GetContent, addr 0x11e5174, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Object* GetContent();

  // Ctor Parameters [CppParam { name: "", ty: "CmsProcessableByteArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsProcessableByteArray(CmsProcessableByteArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsProcessableByteArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsProcessableByteArray(CmsProcessableByteArray const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsProcessableByteArray();

public:
  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___type;

  /// @brief Field bytes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___bytes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsProcessableByteArray, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsProcessableByteArray, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsProcessableByteArray, ___bytes) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsProcessableByteArray);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsProcessableByteArray*, "Org.BouncyCastle.Cms", "CmsProcessableByteArray");
