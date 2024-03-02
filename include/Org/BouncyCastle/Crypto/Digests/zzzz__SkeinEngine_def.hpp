#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SkeinEngine)
namespace Org::BouncyCastle::Crypto::Digests {
class __SkeinEngine__Configuration;
}
namespace Org::BouncyCastle::Crypto::Digests {
class __SkeinEngine__Parameter;
}
namespace Org::BouncyCastle::Crypto::Digests {
class __SkeinEngine__UBI;
}
namespace Org::BouncyCastle::Crypto::Digests {
class __SkeinEngine__UbiTweak;
}
namespace Org::BouncyCastle::Crypto::Engines {
class ThreefishEngine;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class SkeinParameters;
}
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class SkeinEngine;
}
namespace Org::BouncyCastle::Crypto::Digests {
class __SkeinEngine__Configuration;
}
namespace Org::BouncyCastle::Crypto::Digests {
class __SkeinEngine__Parameter;
}
namespace Org::BouncyCastle::Crypto::Digests {
class __SkeinEngine__UBI;
}
namespace Org::BouncyCastle::Crypto::Digests {
class __SkeinEngine__UbiTweak;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::SkeinEngine);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak);
// Type: ::Configuration
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: ::SkeinEngine::Configuration*
class CORDL_TYPE __SkeinEngine__Configuration : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Bytes))::ArrayW<uint8_t, ::Array<uint8_t>*> Bytes;

  /// @brief Field bytes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bytes, put = __cordl_internal_set_bytes))::ArrayW<uint8_t, ::Array<uint8_t>*> bytes;

  static inline ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration* New_ctor(int64_t outputSizeBits);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_bytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_bytes();

  constexpr void __cordl_internal_set_bytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0xf19b34, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(int64_t outputSizeBits);

  /// @brief Method get_Bytes, addr 0xf1a0e4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Bytes();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SkeinEngine__Configuration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SkeinEngine__Configuration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SkeinEngine__Configuration(__SkeinEngine__Configuration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SkeinEngine__Configuration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SkeinEngine__Configuration(__SkeinEngine__Configuration const&) = delete;

  /// @brief Field bytes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___bytes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration, ___bytes) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
// Type: ::Parameter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: ::SkeinEngine::Parameter*
class CORDL_TYPE __SkeinEngine__Parameter : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Type)) int32_t Type;

  __declspec(property(get = get_Value))::ArrayW<uint8_t, ::Array<uint8_t>*> Value;

  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) int32_t type;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value))::ArrayW<uint8_t, ::Array<uint8_t>*> value;

  static inline ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter* New_ctor(int32_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t const& __cordl_internal_get_type() const;

  constexpr int32_t& __cordl_internal_get_type();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_value() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_type(int32_t value);

  constexpr void __cordl_internal_set_value(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0xf19ab4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_Type, addr 0xf1a0ec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Type();

  /// @brief Method get_Value, addr 0xf1a0f4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SkeinEngine__Parameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SkeinEngine__Parameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SkeinEngine__Parameter(__SkeinEngine__Parameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SkeinEngine__Parameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SkeinEngine__Parameter(__SkeinEngine__Parameter const&) = delete;

  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  int32_t ___type;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter, ___value) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
// Type: ::UbiTweak
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: ::SkeinEngine::UbiTweak*
class CORDL_TYPE __SkeinEngine__UbiTweak : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Final, put = set_Final)) bool Final;

  __declspec(property(get = get_First, put = set_First)) bool First;

  __declspec(property(get = get_Type, put = set_Type)) uint32_t Type;

  /// @brief Field extendedPosition, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_extendedPosition, put = __cordl_internal_set_extendedPosition)) bool extendedPosition;

  /// @brief Field tweak, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tweak, put = __cordl_internal_set_tweak))::ArrayW<uint64_t, ::Array<uint64_t>*> tweak;

  /// @brief Method AdvancePosition, addr 0xf1a36c, size 0x160, virtual false, abstract: false, final false
  inline void AdvancePosition(int32_t advance);

  /// @brief Method GetWords, addr 0xf1a4cc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint64_t, ::Array<uint64_t>*> GetWords();

  static inline ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak* New_ctor();

  /// @brief Method Reset, addr 0xf1a15c, size 0x3c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Reset, addr 0xf1a198, size 0x88, virtual false, abstract: false, final false
  inline void Reset(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak* tweak);

  /// @brief Method ToString, addr 0xf1a4d4, size 0x208, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr bool const& __cordl_internal_get_extendedPosition() const;

  constexpr bool& __cordl_internal_get_extendedPosition();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_tweak() const;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_tweak();

  constexpr void __cordl_internal_set_extendedPosition(bool value);

  constexpr void __cordl_internal_set_tweak(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  /// @brief Method .ctor, addr 0xf1a0fc, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Final, addr 0xf1a2fc, size 0x30, virtual false, abstract: false, final false
  inline bool get_Final();

  /// @brief Method get_First, addr 0xf1a2cc, size 0x30, virtual false, abstract: false, final false
  inline bool get_First();

  /// @brief Method get_Type, addr 0xf1a260, size 0x30, virtual false, abstract: false, final false
  inline uint32_t get_Type();

  /// @brief Method set_Final, addr 0xf1a32c, size 0x40, virtual false, abstract: false, final false
  inline void set_Final(bool value);

  /// @brief Method set_First, addr 0xf1a220, size 0x40, virtual false, abstract: false, final false
  inline void set_First(bool value);

  /// @brief Method set_Type, addr 0xf1a290, size 0x3c, virtual false, abstract: false, final false
  inline void set_Type(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SkeinEngine__UbiTweak();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SkeinEngine__UbiTweak", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SkeinEngine__UbiTweak(__SkeinEngine__UbiTweak&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SkeinEngine__UbiTweak", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SkeinEngine__UbiTweak(__SkeinEngine__UbiTweak const&) = delete;

  /// @brief Field tweak, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___tweak;

  /// @brief Field extendedPosition, offset: 0x18, size: 0x1, def value: None
  bool ___extendedPosition;

  /// @brief Field LOW_RANGE offset 0xffffffff size 0x8
  static constexpr uint64_t LOW_RANGE{ static_cast<uint64_t>(0xffffffff00000000u) };

  /// @brief Field T1_FINAL offset 0xffffffff size 0x8
  static constexpr uint64_t T1_FINAL{ static_cast<uint64_t>(0x8000000000000000u) };

  /// @brief Field T1_FIRST offset 0xffffffff size 0x8
  static constexpr uint64_t T1_FIRST{ static_cast<uint64_t>(0x4000000000000000u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak, ___tweak) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak, ___extendedPosition) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
// Type: ::UBI
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: ::SkeinEngine::UBI*
class CORDL_TYPE __SkeinEngine__UBI : public ::System::Object {
public:
  // Declarations
  /// @brief Field currentBlock, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_currentBlock, put = __cordl_internal_set_currentBlock))::ArrayW<uint8_t, ::Array<uint8_t>*> currentBlock;

  /// @brief Field currentOffset, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_currentOffset, put = __cordl_internal_set_currentOffset)) int32_t currentOffset;

  /// @brief Field engine, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_engine, put = __cordl_internal_set_engine))::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine;

  /// @brief Field message, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_message, put = __cordl_internal_set_message))::ArrayW<uint64_t, ::Array<uint64_t>*> message;

  /// @brief Field tweak, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tweak, put = __cordl_internal_set_tweak))::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak* tweak;

  /// @brief Method DoFinal, addr 0xf19e04, size 0x70, virtual false, abstract: false, final false
  inline void DoFinal(::ArrayW<uint64_t, ::Array<uint64_t>*> output);

  static inline ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI* New_ctor(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine, int32_t blockSize);

  /// @brief Method ProcessBlock, addr 0xf1a6dc, size 0x170, virtual false, abstract: false, final false
  inline void ProcessBlock(::ArrayW<uint64_t, ::Array<uint64_t>*> output);

  /// @brief Method Reset, addr 0xf19dc4, size 0x40, virtual false, abstract: false, final false
  inline void Reset(int32_t type);

  /// @brief Method Reset, addr 0xf18fb8, size 0xac, virtual false, abstract: false, final false
  inline void Reset(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI* ubi);

  /// @brief Method Update, addr 0xf19c7c, size 0x128, virtual false, abstract: false, final false
  inline void Update(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t offset, int32_t len, ::ArrayW<uint64_t, ::Array<uint64_t>*> output);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_currentBlock() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_currentBlock();

  constexpr int32_t const& __cordl_internal_get_currentOffset() const;

  constexpr int32_t& __cordl_internal_get_currentOffset();

  constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine*& __cordl_internal_get_engine();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*> const& __cordl_internal_get_engine() const;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_message() const;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_message();

  constexpr ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*& __cordl_internal_get_tweak();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*> const& __cordl_internal_get_tweak() const;

  constexpr void __cordl_internal_set_currentBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_currentOffset(int32_t value);

  constexpr void __cordl_internal_set_engine(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* value);

  constexpr void __cordl_internal_set_message(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  constexpr void __cordl_internal_set_tweak(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak* value);

  /// @brief Method .ctor, addr 0xf18ddc, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine, int32_t blockSize);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SkeinEngine__UBI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SkeinEngine__UBI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SkeinEngine__UBI(__SkeinEngine__UBI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SkeinEngine__UBI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SkeinEngine__UBI(__SkeinEngine__UBI const&) = delete;

  /// @brief Field tweak, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak* ___tweak;

  /// @brief Field engine, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Digests::SkeinEngine* ___engine;

  /// @brief Field currentBlock, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___currentBlock;

  /// @brief Field currentOffset, offset: 0x28, size: 0x4, def value: None
  int32_t ___currentOffset;

  /// @brief Field message, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI, ___tweak) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI, ___engine) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI, ___currentBlock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI, ___currentOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI, ___message) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
// Type: Org.BouncyCastle.Crypto.Digests::SkeinEngine
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Digests::SkeinEngine*
class CORDL_TYPE SkeinEngine : public ::System::Object {
public:
  // Declarations
  using Configuration = ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration;

  using Parameter = ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter;

  using UBI = ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI;

  using UbiTweak = ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak;

  __declspec(property(get = get_BlockSize)) int32_t BlockSize;

  /// @brief Field INITIAL_STATES, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_INITIAL_STATES, put = setStaticF_INITIAL_STATES))::System::Collections::IDictionary* INITIAL_STATES;

  __declspec(property(get = get_OutputSize)) int32_t OutputSize;

  /// @brief Field chain, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_chain, put = __cordl_internal_set_chain))::ArrayW<uint64_t, ::Array<uint64_t>*> chain;

  /// @brief Field initialState, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_initialState, put = __cordl_internal_set_initialState))::ArrayW<uint64_t, ::Array<uint64_t>*> initialState;

  /// @brief Field key, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::ArrayW<uint8_t, ::Array<uint8_t>*> key;

  /// @brief Field outputSizeBytes, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_outputSizeBytes, put = __cordl_internal_set_outputSizeBytes)) int32_t outputSizeBytes;

  /// @brief Field postMessageParameters, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_postMessageParameters,
                      put = __cordl_internal_set_postMessageParameters))::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*,
                                                                                 ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*> postMessageParameters;

  /// @brief Field preMessageParameters, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_preMessageParameters,
                      put = __cordl_internal_set_preMessageParameters))::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*,
                                                                                ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*> preMessageParameters;

  /// @brief Field singleByte, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_singleByte, put = __cordl_internal_set_singleByte))::ArrayW<uint8_t, ::Array<uint8_t>*> singleByte;

  /// @brief Field threefish, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_threefish, put = __cordl_internal_set_threefish))::Org::BouncyCastle::Crypto::Engines::ThreefishEngine* threefish;

  /// @brief Field ubi, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_ubi, put = __cordl_internal_set_ubi))::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI* ubi;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept;

  /// @brief Method CheckInitialised, addr 0xf19e74, size 0x60, virtual false, abstract: false, final false
  inline void CheckInitialised();

  /// @brief Method Clone, addr 0xf19064, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*>
  Clone(::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*> data,
        ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*> existing);

  /// @brief Method Copy, addr 0xf19104, size 0x60, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method CopyIn, addr 0xf18eb4, size 0x104, virtual false, abstract: false, final false
  inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine);

  /// @brief Method CreateInitialState, addr 0xf197e4, size 0x2b8, virtual false, abstract: false, final false
  inline void CreateInitialState();

  /// @brief Method DoFinal, addr 0xf187e8, size 0x1c8, virtual false, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method Init, addr 0xf18610, size 0xb8, virtual false, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters* parameters);

  /// @brief Method InitParams, addr 0xf1916c, size 0x678, virtual false, abstract: false, final false
  inline void InitParams(::System::Collections::IDictionary* parameters);

  /// @brief Method InitialState, addr 0xf18c94, size 0x140, virtual false, abstract: false, final false
  static inline void InitialState(int32_t blockSize, int32_t outputSize, ::ArrayW<uint64_t, ::Array<uint64_t>*> state);

  static inline ::Org::BouncyCastle::Crypto::Digests::SkeinEngine* New_ctor(int32_t blockSizeBits, int32_t outputSizeBits);

  static inline ::Org::BouncyCastle::Crypto::Digests::SkeinEngine* New_ctor(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine);

  /// @brief Method Output, addr 0xf19ed4, size 0x210, virtual false, abstract: false, final false
  inline void Output(uint64_t outputSequence, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff, int32_t outputBytes);

  /// @brief Method Reset, addr 0xf186e0, size 0x40, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Reset, addr 0xf1825c, size 0x124, virtual true, abstract: false, final true
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  /// @brief Method UbiComplete, addr 0xf19ae4, size 0x50, virtual false, abstract: false, final false
  inline void UbiComplete(int32_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method UbiFinal, addr 0xf19da4, size 0x20, virtual false, abstract: false, final false
  inline void UbiFinal();

  /// @brief Method UbiInit, addr 0xf19a9c, size 0x18, virtual false, abstract: false, final false
  inline void UbiInit(int32_t type);

  /// @brief Method Update, addr 0xf18738, size 0x34, virtual false, abstract: false, final false
  inline void Update(uint8_t inByte);

  /// @brief Method Update, addr 0xf18784, size 0x4c, virtual false, abstract: false, final false
  inline void Update(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len);

  /// @brief Method VariantIdentifier, addr 0xf18dd4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t VariantIdentifier(int32_t blockSizeBytes, int32_t outputSizeBytes);

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_chain() const;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_chain();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_initialState() const;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_initialState();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_key() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_key();

  constexpr int32_t const& __cordl_internal_get_outputSizeBytes() const;

  constexpr int32_t& __cordl_internal_get_outputSizeBytes();

  constexpr ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*> const&
  __cordl_internal_get_postMessageParameters() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*>&
  __cordl_internal_get_postMessageParameters();

  constexpr ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*> const&
  __cordl_internal_get_preMessageParameters() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*>&
  __cordl_internal_get_preMessageParameters();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_singleByte() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_singleByte();

  constexpr ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*& __cordl_internal_get_threefish();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*> const& __cordl_internal_get_threefish() const;

  constexpr ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*& __cordl_internal_get_ubi();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*> const& __cordl_internal_get_ubi() const;

  constexpr void __cordl_internal_set_chain(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  constexpr void __cordl_internal_set_initialState(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  constexpr void __cordl_internal_set_key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_outputSizeBytes(int32_t value);

  constexpr void __cordl_internal_set_postMessageParameters(
      ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*> value);

  constexpr void
  __cordl_internal_set_preMessageParameters(::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*> value);

  constexpr void __cordl_internal_set_singleByte(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_threefish(::Org::BouncyCastle::Crypto::Engines::ThreefishEngine* value);

  constexpr void __cordl_internal_set_ubi(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI* value);

  /// @brief Method .ctor, addr 0xf17f58, size 0x190, virtual false, abstract: false, final false
  inline void _ctor(int32_t blockSizeBits, int32_t outputSizeBits);

  /// @brief Method .ctor, addr 0xf18178, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine);

  static inline ::System::Collections::IDictionary* getStaticF_INITIAL_STATES();

  /// @brief Method get_BlockSize, addr 0xf185a4, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_BlockSize();

  /// @brief Method get_OutputSize, addr 0xf19164, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_OutputSize();

  /// @brief Convert to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr ::Org::BouncyCastle::Utilities::IMemoable* i___Org__BouncyCastle__Utilities__IMemoable() noexcept;

  static inline void setStaticF_INITIAL_STATES(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SkeinEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SkeinEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SkeinEngine(SkeinEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SkeinEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SkeinEngine(SkeinEngine const&) = delete;

  /// @brief Field threefish, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine* ___threefish;

  /// @brief Field outputSizeBytes, offset: 0x18, size: 0x4, def value: None
  int32_t ___outputSizeBytes;

  /// @brief Field chain, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___chain;

  /// @brief Field initialState, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___initialState;

  /// @brief Field key, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___key;

  /// @brief Field preMessageParameters, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*> ___preMessageParameters;

  /// @brief Field postMessageParameters, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*> ___postMessageParameters;

  /// @brief Field ubi, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI* ___ubi;

  /// @brief Field singleByte, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___singleByte;

  /// @brief Field PARAM_TYPE_CONFIG offset 0xffffffff size 0x4
  static constexpr int32_t PARAM_TYPE_CONFIG{ static_cast<int32_t>(0x4) };

  /// @brief Field PARAM_TYPE_KEY offset 0xffffffff size 0x4
  static constexpr int32_t PARAM_TYPE_KEY{ static_cast<int32_t>(0x0) };

  /// @brief Field PARAM_TYPE_MESSAGE offset 0xffffffff size 0x4
  static constexpr int32_t PARAM_TYPE_MESSAGE{ static_cast<int32_t>(0x30) };

  /// @brief Field PARAM_TYPE_OUTPUT offset 0xffffffff size 0x4
  static constexpr int32_t PARAM_TYPE_OUTPUT{ static_cast<int32_t>(0x3f) };

  /// @brief Field SKEIN_1024 offset 0xffffffff size 0x4
  static constexpr int32_t SKEIN_1024{ static_cast<int32_t>(0x400) };

  /// @brief Field SKEIN_256 offset 0xffffffff size 0x4
  static constexpr int32_t SKEIN_256{ static_cast<int32_t>(0x100) };

  /// @brief Field SKEIN_512 offset 0xffffffff size 0x4
  static constexpr int32_t SKEIN_512{ static_cast<int32_t>(0x200) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::SkeinEngine, 0x58>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::SkeinEngine, ___threefish) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::SkeinEngine, ___outputSizeBytes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::SkeinEngine, ___chain) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::SkeinEngine, ___initialState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::SkeinEngine, ___key) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::SkeinEngine, ___preMessageParameters) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::SkeinEngine, ___postMessageParameters) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::SkeinEngine, ___ubi) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::SkeinEngine, ___singleByte) == 0x50, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::SkeinEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::SkeinEngine*, "Org.BouncyCastle.Crypto.Digests", "SkeinEngine");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration*, "Org.BouncyCastle.Crypto.Digests", "SkeinEngine/Configuration");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, "Org.BouncyCastle.Crypto.Digests", "SkeinEngine/Parameter");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*, "Org.BouncyCastle.Crypto.Digests", "SkeinEngine/UBI");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*, "Org.BouncyCastle.Crypto.Digests", "SkeinEngine/UbiTweak");
