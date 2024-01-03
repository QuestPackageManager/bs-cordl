#pragma once
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
namespace System::IO {
class TextWriter;
}
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemWriter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::Pem::PemWriter);
// Type: Org.BouncyCastle.Utilities.IO.Pem::PemWriter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1690))
// CS Name: ::Org.BouncyCastle.Utilities.IO.Pem::PemWriter*
class CORDL_TYPE PemWriter : public ::System::Object {
public:
  // Declarations
  /// @brief Field writer, offset 0x10, size 0x8
  __declspec(property(get = __get_writer, put = __set_writer))::System::IO::TextWriter* writer;

  /// @brief Field nlLength, offset 0x18, size 0x4
  __declspec(property(get = __get_nlLength, put = __set_nlLength)) int32_t nlLength;

  /// @brief Field buf, offset 0x20, size 0x8
  __declspec(property(get = __get_buf, put = __set_buf))::ArrayW<char16_t, ::Array<char16_t>*> buf;

  __declspec(property(get = get_Writer))::System::IO::TextWriter* Writer;

  constexpr ::System::IO::TextWriter*& __get_writer();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::TextWriter*> const& __get_writer() const;

  constexpr void __set_writer(::System::IO::TextWriter* value);

  constexpr int32_t& __get_nlLength();

  constexpr int32_t const& __get_nlLength() const;

  constexpr void __set_nlLength(int32_t value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get_buf();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get_buf() const;

  constexpr void __set_buf(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::Org::BouncyCastle::Utilities::IO::Pem::PemWriter* New_ctor(::System::IO::TextWriter* writer);

  /// @brief Method .ctor, addr 0x10d4088, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextWriter* writer);

  /// @brief Method get_Writer, addr 0x10d4184, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::TextWriter* get_Writer();

  /// @brief Method GetOutputSize, addr 0x10d418c, size 0x4d8, virtual false, abstract: false, final false
  inline int32_t GetOutputSize(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* obj);

  /// @brief Method WriteObject, addr 0x10d4664, size 0x54c, virtual false, abstract: false, final false
  inline void WriteObject(::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator* objGen);

  /// @brief Method WriteEncoded, addr 0x10d4c44, size 0xe0, virtual false, abstract: false, final false
  inline void WriteEncoded(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method WritePreEncapsulationBoundary, addr 0x10d4bb0, size 0x94, virtual false, abstract: false, final false
  inline void WritePreEncapsulationBoundary(::StringW type);

  /// @brief Method WritePostEncapsulationBoundary, addr 0x10d4d24, size 0x94, virtual false, abstract: false, final false
  inline void WritePostEncapsulationBoundary(::StringW type);

  // Ctor Parameters [CppParam { name: "", ty: "PemWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PemWriter(PemWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PemWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PemWriter(PemWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PemWriter();

public:
  /// @brief Field writer, offset: 0x10, size: 0x8, def value: None
  ::System::IO::TextWriter* ___writer;

  /// @brief Field nlLength, offset: 0x18, size: 0x4, def value: None
  int32_t ___nlLength;

  /// @brief Field buf, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___buf;

  /// @brief Field LineLength offset 0xffffffff size 0x4
  static constexpr int32_t LineLength{ static_cast<int32_t>(0x40) };

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
