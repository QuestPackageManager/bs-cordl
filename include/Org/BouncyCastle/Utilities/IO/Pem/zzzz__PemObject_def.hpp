#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PemObject)
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObjectGenerator;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::Pem::PemObject);
// Type: Org.BouncyCastle.Utilities.IO.Pem::PemObject
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.IO.Pem::PemObject*
class CORDL_TYPE PemObject : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Content))::ArrayW<uint8_t, ::Array<uint8_t>*> Content;

  __declspec(property(get = get_Headers))::System::Collections::IList* Headers;

  __declspec(property(get = get_Type))::StringW Type;

  /// @brief Field content, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content))::ArrayW<uint8_t, ::Array<uint8_t>*> content;

  /// @brief Field headers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_headers, put = __cordl_internal_set_headers))::System::Collections::IList* headers;

  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::StringW type;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator"
  constexpr operator ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator*() noexcept;

  /// @brief Method Generate, addr 0x11cf9d8, size 0x4, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* Generate();

  static inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* New_ctor(::StringW type, ::ArrayW<uint8_t, ::Array<uint8_t>*> content);

  static inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* New_ctor(::StringW type, ::System::Collections::IList* headers, ::ArrayW<uint8_t, ::Array<uint8_t>*> content);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_content() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_content();

  constexpr ::System::Collections::IList*& __cordl_internal_get_headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_headers() const;

  constexpr ::StringW const& __cordl_internal_get_type() const;

  constexpr ::StringW& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_content(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_headers(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_type(::StringW value);

  /// @brief Method .ctor, addr 0x11cf8bc, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW type, ::ArrayW<uint8_t, ::Array<uint8_t>*> content);

  /// @brief Method .ctor, addr 0x11cf934, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW type, ::System::Collections::IList* headers, ::ArrayW<uint8_t, ::Array<uint8_t>*> content);

  /// @brief Method get_Content, addr 0x11cf9d0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Content();

  /// @brief Method get_Headers, addr 0x11cf9c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::IList* get_Headers();

  /// @brief Method get_Type, addr 0x11cf9c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Type();

  /// @brief Convert to "::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator"
  constexpr ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator* i___Org__BouncyCastle__Utilities__IO__Pem__PemObjectGenerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PemObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PemObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PemObject(PemObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PemObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PemObject(PemObject const&) = delete;

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::StringW ___type;

  /// @brief Field headers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ___headers;

  /// @brief Field content, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::Pem::PemObject, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::IO::Pem::PemObject, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::IO::Pem::PemObject, ___headers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::IO::Pem::PemObject, ___content) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Utilities::IO::Pem
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::Pem::PemObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*, "Org.BouncyCastle.Utilities.IO.Pem", "PemObject");
