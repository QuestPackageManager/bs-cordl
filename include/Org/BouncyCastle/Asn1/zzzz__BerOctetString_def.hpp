#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/BerOctetString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerOctetString_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BerOctetString)
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class BerOctetString_ChunkEnumerator;
}
namespace Org::BouncyCastle::Asn1 {
class DerOctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
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
class BerOctetString_ChunkEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BerOctetString);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator);
// Dependencies System.Collections.IEnumerator, System.Object
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.BerOctetString/ChunkEnumerator
class CORDL_TYPE BerOctetString_ChunkEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  /// @brief Field chunkSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_chunkSize, put = __cordl_internal_set_chunkSize)) int32_t chunkSize;

  /// @brief Field currentChunk, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_currentChunk, put = __cordl_internal_set_currentChunk)) ::Org::BouncyCastle::Asn1::DerOctetString* currentChunk;

  /// @brief Field nextChunkPos, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_nextChunkPos, put = __cordl_internal_set_nextChunkPos)) int32_t nextChunkPos;

  /// @brief Field octets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_octets, put = __cordl_internal_set_octets)) ::ArrayW<uint8_t, ::Array<uint8_t>*> octets;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x2634244, size 0x12c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> octets, int32_t chunkSize);

  /// @brief Method Reset, addr 0x2634370, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_chunkSize() const;

  constexpr int32_t& __cordl_internal_get_chunkSize();

  constexpr ::Org::BouncyCastle::Asn1::DerOctetString* const& __cordl_internal_get_currentChunk() const;

  constexpr ::Org::BouncyCastle::Asn1::DerOctetString*& __cordl_internal_get_currentChunk();

  constexpr int32_t const& __cordl_internal_get_nextChunkPos() const;

  constexpr int32_t& __cordl_internal_get_nextChunkPos();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_octets() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_octets();

  constexpr void __cordl_internal_set_chunkSize(int32_t value);

  constexpr void __cordl_internal_set_currentChunk(::Org::BouncyCastle::Asn1::DerOctetString* value);

  constexpr void __cordl_internal_set_nextChunkPos(int32_t value);

  constexpr void __cordl_internal_set_octets(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x2633d88, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> octets, int32_t chunkSize);

  /// @brief Method get_Current, addr 0x26341fc, size 0x48, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BerOctetString_ChunkEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BerOctetString_ChunkEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BerOctetString_ChunkEnumerator(BerOctetString_ChunkEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BerOctetString_ChunkEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BerOctetString_ChunkEnumerator(BerOctetString_ChunkEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 480 };

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
static_assert(offsetof(::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator, ___octets) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator, ___chunkSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator, ___currentChunk) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator, ___nextChunkPos) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
// Dependencies Org.BouncyCastle.Asn1.DerOctetString, System.Collections.IEnumerable
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.BerOctetString
class CORDL_TYPE BerOctetString : public ::Org::BouncyCastle::Asn1::DerOctetString {
public:
  // Declarations
  using ChunkEnumerator = ::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator;

  /// @brief Field DefaultChunkSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_DefaultChunkSize, put = setStaticF_DefaultChunkSize)) int32_t DefaultChunkSize;

  /// @brief Field chunkSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_chunkSize, put = __cordl_internal_set_chunkSize)) int32_t chunkSize;

  /// @brief Field octs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_octs, put = __cordl_internal_set_octs)) ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>
      octs;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Encode, addr 0x2633dc4, size 0x3ec, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method FromSequence, addr 0x262e9e0, size 0x128, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::BerOctetString* FromSequence(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetEnumerator, addr 0x2633d00, size 0x88, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetObjects, addr 0x2633dc0, size 0x4, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetObjects();

  static inline ::Org::BouncyCastle::Asn1::BerOctetString* New_ctor(::System::Collections::IEnumerable* e);

  static inline ::Org::BouncyCastle::Asn1::BerOctetString* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> octs);

  static inline ::Org::BouncyCastle::Asn1::BerOctetString* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> octs,
                                                                    int32_t chunkSize);

  static inline ::Org::BouncyCastle::Asn1::BerOctetString* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  static inline ::Org::BouncyCastle::Asn1::BerOctetString* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str, int32_t chunkSize);

  static inline ::Org::BouncyCastle::Asn1::BerOctetString*
  New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str, ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> octs, int32_t chunkSize);

  /// @brief Method ToBytes, addr 0x2633880, size 0xdc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToBytes(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> octs);

  /// @brief Method ToOctetStringArray, addr 0x263395c, size 0x1ec, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> ToOctetStringArray(::System::Collections::IEnumerable* e);

  constexpr int32_t const& __cordl_internal_get_chunkSize() const;

  constexpr int32_t& __cordl_internal_get_chunkSize();

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> const& __cordl_internal_get_octs() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>& __cordl_internal_get_octs();

  constexpr void __cordl_internal_set_chunkSize(int32_t value);

  constexpr void __cordl_internal_set_octs(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> value);

  /// @brief Method .ctor, addr 0x2633b48, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerable* e);

  /// @brief Method .ctor, addr 0x262c2a8, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> octs);

  /// @brief Method .ctor, addr 0x2633c58, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> octs, int32_t chunkSize);

  /// @brief Method .ctor, addr 0x2633bb4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  /// @brief Method .ctor, addr 0x2633c30, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str, int32_t chunkSize);

  /// @brief Method .ctor, addr 0x2633cd4, size 0x2c, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 481 };

  /// @brief Field chunkSize, offset: 0x18, size: 0x4, def value: None
  int32_t ___chunkSize;

  /// @brief Field octs, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> ___octs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::BerOctetString, ___chunkSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::BerOctetString, ___octs) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerOctetString, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerOctetString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerOctetString*, "Org.BouncyCastle.Asn1", "BerOctetString");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator*, "Org.BouncyCastle.Asn1", "BerOctetString/ChunkEnumerator");
