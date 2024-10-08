#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/IO/Pem/PemWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PemWriter)
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObjectGenerator;
}
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
namespace System::IO {
class TextWriter;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemWriter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::Pem::PemWriter);
// Type: Org.BouncyCastle.Utilities.IO.Pem::PemWriter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.IO.Pem::PemWriter*
class CORDL_TYPE PemWriter : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Writer)) ::System::IO::TextWriter* Writer;

  /// @brief Field buf, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_buf, put = __cordl_internal_set_buf)) ::ArrayW<char16_t, ::Array<char16_t>*> buf;

  /// @brief Field nlLength, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_nlLength, put = __cordl_internal_set_nlLength)) int32_t nlLength;

  /// @brief Field writer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_writer, put = __cordl_internal_set_writer)) ::System::IO::TextWriter* writer;

  /// @brief Method GetOutputSize, addr 0x2512f98, size 0x4d4, virtual false, abstract: false, final false
  inline int32_t GetOutputSize(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* obj);

  static inline ::Org::BouncyCastle::Utilities::IO::Pem::PemWriter* New_ctor(::System::IO::TextWriter* writer);

  /// @brief Method WriteEncoded, addr 0x2513a4c, size 0xe8, virtual false, abstract: false, final false
  inline void WriteEncoded(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method WriteObject, addr 0x251346c, size 0x54c, virtual false, abstract: false, final false
  inline void WriteObject(::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator* objGen);

  /// @brief Method WritePostEncapsulationBoundary, addr 0x2513b34, size 0x94, virtual false, abstract: false, final false
  inline void WritePostEncapsulationBoundary(::StringW type);

  /// @brief Method WritePreEncapsulationBoundary, addr 0x25139b8, size 0x94, virtual false, abstract: false, final false
  inline void WritePreEncapsulationBoundary(::StringW type);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_buf() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_buf();

  constexpr int32_t const& __cordl_internal_get_nlLength() const;

  constexpr int32_t& __cordl_internal_get_nlLength();

  constexpr ::System::IO::TextWriter*& __cordl_internal_get_writer();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::TextWriter*> const& __cordl_internal_get_writer() const;

  constexpr void __cordl_internal_set_buf(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_nlLength(int32_t value);

  constexpr void __cordl_internal_set_writer(::System::IO::TextWriter* value);

  /// @brief Method .ctor, addr 0x2512e98, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextWriter* writer);

  /// @brief Method get_Writer, addr 0x2512f90, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::TextWriter* get_Writer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PemWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PemWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PemWriter(PemWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PemWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PemWriter(PemWriter const&) = delete;

  /// @brief Field writer, offset: 0x10, size: 0x8, def value: None
  ::System::IO::TextWriter* ___writer;

  /// @brief Field nlLength, offset: 0x18, size: 0x4, def value: None
  int32_t ___nlLength;

  /// @brief Field buf, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___buf;

  /// @brief Field LineLength offset 0xffffffff size 0x4
  static constexpr int32_t LineLength{ static_cast<int32_t>(0x40) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1690 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::Pem::PemWriter, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::IO::Pem::PemWriter, ___writer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::IO::Pem::PemWriter, ___nlLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::IO::Pem::PemWriter, ___buf) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Utilities::IO::Pem
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::Pem::PemWriter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::Pem::PemWriter*, "Org.BouncyCastle.Utilities.IO.Pem", "PemWriter");
