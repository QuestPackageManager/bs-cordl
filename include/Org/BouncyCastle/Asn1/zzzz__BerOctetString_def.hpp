#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerOctetString_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BerOctetString)
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerOctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class __BerOctetString__ChunkEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerOctetString;
}
namespace Org::BouncyCastle::Asn1 {
class __BerOctetString__ChunkEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BerOctetString);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator);
// Type: ::ChunkEnumerator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::BerOctetString::ChunkEnumerator*
class CORDL_TYPE __BerOctetString__ChunkEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Object* Current;

  /// @brief Field chunkSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_chunkSize, put = __cordl_internal_set_chunkSize)) int32_t chunkSize;

  /// @brief Field currentChunk, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_currentChunk, put = __cordl_internal_set_currentChunk))::Org::BouncyCastle::Asn1::DerOctetString* currentChunk;

  /// @brief Field nextChunkPos, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_nextChunkPos, put = __cordl_internal_set_nextChunkPos)) int32_t nextChunkPos;

  /// @brief Field octets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_octets, put = __cordl_internal_set_octets))::ArrayW<uint8_t, ::Array<uint8_t>*> octets;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x122cddc, size 0x12c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> octets, int32_t chunkSize);

  /// @brief Method Reset, addr 0x122cf08, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_chunkSize() const;

  constexpr int32_t& __cordl_internal_get_chunkSize();

  constexpr ::Org::BouncyCastle::Asn1::DerOctetString*& __cordl_internal_get_currentChunk();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerOctetString*> const& __cordl_internal_get_currentChunk() const;

  constexpr int32_t const& __cordl_internal_get_nextChunkPos() const;

  constexpr int32_t& __cordl_internal_get_nextChunkPos();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_octets() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_octets();

  constexpr void __cordl_internal_set_chunkSize(int32_t value);

  constexpr void __cordl_internal_set_currentChunk(::Org::BouncyCastle::Asn1::DerOctetString* value);

  constexpr void __cordl_internal_set_nextChunkPos(int32_t value);

  constexpr void __cordl_internal_set_octets(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x122c920, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> octets, int32_t chunkSize);

  /// @brief Method get_Current, addr 0x122cd8c, size 0x50, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BerOctetString__ChunkEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BerOctetString__ChunkEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BerOctetString__ChunkEnumerator(__BerOctetString__ChunkEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BerOctetString__ChunkEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BerOctetString__ChunkEnumerator(__BerOctetString__ChunkEnumerator const&) = delete;

  /// @brief Field octets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___octets;

  /// @brief Field chunkSize, offset: 0x18, size: 0x4, def value: None
  int32_t ___chunkSize;

  /// @brief Field currentChunk, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerOctetString* ___currentChunk;

  /// @brief Field nextChunkPos, offset: 0x28, size: 0x4, def value: None
  int32_t ___nextChunkPos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator, ___octets) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator, ___chunkSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator, ___currentChunk) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator, ___nextChunkPos) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
// Type: Org.BouncyCastle.Asn1::BerOctetString
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::BerOctetString*
class CORDL_TYPE BerOctetString : public ::Org::BouncyCastle::Asn1::DerOctetString {
public:
  // Declarations
  using ChunkEnumerator = ::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator;

  /// @brief Field DefaultChunkSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_DefaultChunkSize, put = setStaticF_DefaultChunkSize)) int32_t DefaultChunkSize;

  /// @brief Field chunkSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_chunkSize, put = __cordl_internal_set_chunkSize)) int32_t chunkSize;

  /// @brief Field octs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_octs,
                      put = __cordl_internal_set_octs))::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> octs;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Encode, addr 0x122c95c, size 0x3e4, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method FromSequence, addr 0x12274a0, size 0x12c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::BerOctetString* FromSequence(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetEnumerator, addr 0x122c890, size 0x90, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetObjects, addr 0x122c958, size 0x4, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetObjects();

  static inline ::Org::BouncyCastle::Asn1::BerOctetString* New_ctor(::System::Collections::IEnumerable* e);

  static inline ::Org::BouncyCastle::Asn1::BerOctetString* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> octs);

  static inline ::Org::BouncyCastle::Asn1::BerOctetString* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> octs,
                                                                    int32_t chunkSize);

  static inline ::Org::BouncyCastle::Asn1::BerOctetString* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  static inline ::Org::BouncyCastle::Asn1::BerOctetString* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str, int32_t chunkSize);

  static inline ::Org::BouncyCastle::Asn1::BerOctetString*
  New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str, ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> octs, int32_t chunkSize);

  /// @brief Method ToBytes, addr 0x122c414, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToBytes(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> octs);

  /// @brief Method ToOctetStringArray, addr 0x122c4ec, size 0x1ec, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> ToOctetStringArray(::System::Collections::IEnumerable* e);

  constexpr int32_t const& __cordl_internal_get_chunkSize() const;

  constexpr int32_t& __cordl_internal_get_chunkSize();

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> const& __cordl_internal_get_octs() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>& __cordl_internal_get_octs();

  constexpr void __cordl_internal_set_chunkSize(int32_t value);

  constexpr void __cordl_internal_set_octs(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> value);

  /// @brief Method .ctor, addr 0x122c6d8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerable* e);

  /// @brief Method .ctor, addr 0x1224c9c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> octs);

  /// @brief Method .ctor, addr 0x122c7e8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> octs, int32_t chunkSize);

  /// @brief Method .ctor, addr 0x122c744, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  /// @brief Method .ctor, addr 0x122c7c0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str, int32_t chunkSize);

  /// @brief Method .ctor, addr 0x122c864, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str, ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> octs, int32_t chunkSize);

  static inline int32_t getStaticF_DefaultChunkSize();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  static inline void setStaticF_DefaultChunkSize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BerOctetString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BerOctetString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BerOctetString(BerOctetString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BerOctetString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BerOctetString(BerOctetString const&) = delete;

  /// @brief Field chunkSize, offset: 0x18, size: 0x4, def value: None
  int32_t ___chunkSize;

  /// @brief Field octs, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> ___octs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerOctetString, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::BerOctetString, ___chunkSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::BerOctetString, ___octs) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerOctetString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerOctetString*, "Org.BouncyCastle.Asn1", "BerOctetString");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator*, "Org.BouncyCastle.Asn1", "BerOctetString/ChunkEnumerator");
