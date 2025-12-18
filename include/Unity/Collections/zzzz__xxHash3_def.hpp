#pragma once
// IWYU pragma private; include "Unity/Collections/xxHash3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(xxHash3)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections {
struct StreamingState_xxHash3_StreamingStateData;
}
namespace Unity::Collections {
class xxHash3_Hash128Long_00000A7A$BurstDirectCall;
}
namespace Unity::Collections {
class xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate;
}
namespace Unity::Collections {
class xxHash3_Hash64Long_00000A73$BurstDirectCall;
}
namespace Unity::Collections {
class xxHash3_Hash64Long_00000A73$PostfixBurstDelegate;
}
namespace Unity::Collections {
struct xxHash3_StreamingState;
}
namespace Unity::Collections {
struct xxHash3_ulong2;
}
namespace Unity::Mathematics {
struct uint2;
}
namespace Unity::Mathematics {
struct uint4;
}
// Forward declare root types
namespace Unity::Collections {
class xxHash3;
}
namespace Unity::Collections {
class xxHash3_Hash128Long_00000A7A$BurstDirectCall;
}
namespace Unity::Collections {
class xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate;
}
namespace Unity::Collections {
class xxHash3_Hash64Long_00000A73$BurstDirectCall;
}
namespace Unity::Collections {
class xxHash3_Hash64Long_00000A73$PostfixBurstDelegate;
}
namespace Unity::Collections {
struct StreamingState_xxHash3_StreamingStateData;
}
namespace Unity::Collections {
struct xxHash3_StreamingState;
}
namespace Unity::Collections {
struct xxHash3_ulong2;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::xxHash3);
MARK_REF_PTR_T(::Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall);
MARK_REF_PTR_T(::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate);
MARK_REF_PTR_T(::Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall);
MARK_REF_PTR_T(::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate);
MARK_VAL_T(::Unity::Collections::StreamingState_xxHash3_StreamingStateData);
MARK_VAL_T(::Unity::Collections::xxHash3_StreamingState);
MARK_VAL_T(::Unity::Collections::xxHash3_ulong2);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.xxHash3/ulong2
struct CORDL_TYPE xxHash3_ulong2 {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6314f68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint64_t x, uint64_t y);

  // Ctor Parameters []
  // @brief default ctor
  constexpr xxHash3_ulong2();

  // Ctor Parameters [CppParam { name: "x", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr xxHash3_ulong2(uint64_t x, uint64_t y) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15711 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field x, offset: 0x0, size: 0x8, def value: None
  uint64_t x;

  /// @brief Field y, offset: 0x8, size: 0x8, def value: None
  uint64_t y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::xxHash3_ulong2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::xxHash3_ulong2, y) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::xxHash3_ulong2, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.xxHash3/StreamingState/StreamingStateData
struct CORDL_TYPE StreamingState_xxHash3_StreamingStateData {
public:
  // Declarations
  /// @brief Field Acc, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_Acc, put = __cordl_internal_set_Acc)) uint64_t Acc;

  /// @brief Field Buffer, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_Buffer, put = __cordl_internal_set_Buffer)) uint8_t Buffer;

  /// @brief Field BufferedSize, offset 0x144, size 0x4
  __declspec(property(get = __cordl_internal_get_BufferedSize, put = __cordl_internal_set_BufferedSize)) int32_t BufferedSize;

  /// @brief Field IsHash64, offset 0x140, size 0x4
  __declspec(property(get = __cordl_internal_get_IsHash64, put = __cordl_internal_set_IsHash64)) int32_t IsHash64;

  /// @brief Field NbStripesSoFar, offset 0x148, size 0x4
  __declspec(property(get = __cordl_internal_get_NbStripesSoFar, put = __cordl_internal_set_NbStripesSoFar)) int32_t NbStripesSoFar;

  /// @brief Field SecretKey, offset 0x160, size 0x1
  __declspec(property(get = __cordl_internal_get_SecretKey, put = __cordl_internal_set_SecretKey)) uint8_t SecretKey;

  /// @brief Field Seed, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_Seed, put = __cordl_internal_set_Seed)) uint64_t Seed;

  /// @brief Field TotalLength, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_TotalLength, put = __cordl_internal_set_TotalLength)) int64_t TotalLength;

  /// @brief Field _PadEnd, offset 0x21c, size 0x1
  __declspec(property(get = __cordl_internal_get__PadEnd, put = __cordl_internal_set__PadEnd)) uint8_t _PadEnd;

  constexpr uint64_t const& __cordl_internal_get_Acc() const;

  constexpr uint64_t& __cordl_internal_get_Acc();

  constexpr uint8_t const& __cordl_internal_get_Buffer() const;

  constexpr uint8_t& __cordl_internal_get_Buffer();

  constexpr int32_t const& __cordl_internal_get_BufferedSize() const;

  constexpr int32_t& __cordl_internal_get_BufferedSize();

  constexpr int32_t const& __cordl_internal_get_IsHash64() const;

  constexpr int32_t& __cordl_internal_get_IsHash64();

  constexpr int32_t const& __cordl_internal_get_NbStripesSoFar() const;

  constexpr int32_t& __cordl_internal_get_NbStripesSoFar();

  constexpr uint8_t const& __cordl_internal_get_SecretKey() const;

  constexpr uint8_t& __cordl_internal_get_SecretKey();

  constexpr uint64_t const& __cordl_internal_get_Seed() const;

  constexpr uint64_t& __cordl_internal_get_Seed();

  constexpr int64_t const& __cordl_internal_get_TotalLength() const;

  constexpr int64_t& __cordl_internal_get_TotalLength();

  constexpr uint8_t const& __cordl_internal_get__PadEnd() const;

  constexpr uint8_t& __cordl_internal_get__PadEnd();

  constexpr void __cordl_internal_set_Acc(uint64_t value);

  constexpr void __cordl_internal_set_Buffer(uint8_t value);

  constexpr void __cordl_internal_set_BufferedSize(int32_t value);

  constexpr void __cordl_internal_set_IsHash64(int32_t value);

  constexpr void __cordl_internal_set_NbStripesSoFar(int32_t value);

  constexpr void __cordl_internal_set_SecretKey(uint8_t value);

  constexpr void __cordl_internal_set_Seed(uint64_t value);

  constexpr void __cordl_internal_set_TotalLength(int64_t value);

  constexpr void __cordl_internal_set__PadEnd(uint8_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamingState_xxHash3_StreamingStateData();

  // Ctor Parameters [CppParam { name: "Acc", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Buffer", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "IsHash64",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "BufferedSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "NbStripesSoFar", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "TotalLength", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "Seed", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "SecretKey", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_PadEnd", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr StreamingState_xxHash3_StreamingStateData(uint64_t Acc, uint8_t Buffer, int32_t IsHash64, int32_t BufferedSize, int32_t NbStripesSoFar, int64_t TotalLength, uint64_t Seed,
                                                      uint8_t SecretKey, uint8_t _PadEnd) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___Acc_padding[0x0];
      /// @brief Field Acc, offset: 0x0, size: 0x8, def value: None
      uint64_t ___Acc;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___Acc_padding_forAlignment[0x0];
      /// @brief Field Acc, offset: 0x0, size: 0x8, def value: None
      uint64_t ___Acc_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x40
      uint8_t ___Buffer_padding[0x40];
      /// @brief Field Buffer, offset: 0x40, size: 0x1, def value: None
      uint8_t ___Buffer;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x40 for alignment
      uint8_t ___Buffer_padding_forAlignment[0x40];
      /// @brief Field Buffer, offset: 0x40, size: 0x1, def value: None
      uint8_t ___Buffer_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x140
      uint8_t ___IsHash64_padding[0x140];
      /// @brief Field IsHash64, offset: 0x140, size: 0x4, def value: None
      int32_t ___IsHash64;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x140 for alignment
      uint8_t ___IsHash64_padding_forAlignment[0x140];
      /// @brief Field IsHash64, offset: 0x140, size: 0x4, def value: None
      int32_t ___IsHash64_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x144
      uint8_t ___BufferedSize_padding[0x144];
      /// @brief Field BufferedSize, offset: 0x144, size: 0x4, def value: None
      int32_t ___BufferedSize;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x144 for alignment
      uint8_t ___BufferedSize_padding_forAlignment[0x144];
      /// @brief Field BufferedSize, offset: 0x144, size: 0x4, def value: None
      int32_t ___BufferedSize_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x148
      uint8_t ___NbStripesSoFar_padding[0x148];
      /// @brief Field NbStripesSoFar, offset: 0x148, size: 0x4, def value: None
      int32_t ___NbStripesSoFar;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x148 for alignment
      uint8_t ___NbStripesSoFar_padding_forAlignment[0x148];
      /// @brief Field NbStripesSoFar, offset: 0x148, size: 0x4, def value: None
      int32_t ___NbStripesSoFar_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x150
      uint8_t ___TotalLength_padding[0x150];
      /// @brief Field TotalLength, offset: 0x150, size: 0x8, def value: None
      int64_t ___TotalLength;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x150 for alignment
      uint8_t ___TotalLength_padding_forAlignment[0x150];
      /// @brief Field TotalLength, offset: 0x150, size: 0x8, def value: None
      int64_t ___TotalLength_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x158
      uint8_t ___Seed_padding[0x158];
      /// @brief Field Seed, offset: 0x158, size: 0x8, def value: None
      uint64_t ___Seed;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x158 for alignment
      uint8_t ___Seed_padding_forAlignment[0x158];
      /// @brief Field Seed, offset: 0x158, size: 0x8, def value: None
      uint64_t ___Seed_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x160
      uint8_t ___SecretKey_padding[0x160];
      /// @brief Field SecretKey, offset: 0x160, size: 0x1, def value: None
      uint8_t ___SecretKey;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x160 for alignment
      uint8_t ___SecretKey_padding_forAlignment[0x160];
      /// @brief Field SecretKey, offset: 0x160, size: 0x1, def value: None
      uint8_t ___SecretKey_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x21c
      uint8_t ____PadEnd_padding[0x21c];
      /// @brief Field _PadEnd, offset: 0x21c, size: 0x1, def value: None
      uint8_t ____PadEnd;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x21c for alignment
      uint8_t ____PadEnd_padding_forAlignment[0x21c];
      /// @brief Field _PadEnd, offset: 0x21c, size: 0x1, def value: None
      uint8_t ____PadEnd_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15712 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x220 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::StreamingState_xxHash3_StreamingStateData, 0x220>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies Unity.Collections.xxHash3::StreamingState::StreamingStateData
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.xxHash3/StreamingState
struct CORDL_TYPE xxHash3_StreamingState {
public:
  // Declarations
  using StreamingStateData = ::Unity::Collections::StreamingState_xxHash3_StreamingStateData;

  __declspec(property(get = get_Acc)) uint64_t* Acc;

  __declspec(property(get = get_Buffer)) uint8_t* Buffer;

  /// @brief Field INTERNAL_BUFFER_SIZE, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_INTERNAL_BUFFER_SIZE, put = setStaticF_INTERNAL_BUFFER_SIZE)) int32_t INTERNAL_BUFFER_SIZE;

  /// @brief Field INTERNAL_BUFFER_STRIPES, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_INTERNAL_BUFFER_STRIPES, put = setStaticF_INTERNAL_BUFFER_STRIPES)) int32_t INTERNAL_BUFFER_STRIPES;

  /// @brief Field NB_STRIPES_PER_BLOCK, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_NB_STRIPES_PER_BLOCK, put = setStaticF_NB_STRIPES_PER_BLOCK)) int32_t NB_STRIPES_PER_BLOCK;

  /// @brief Field SECRET_LIMIT, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_SECRET_LIMIT, put = setStaticF_SECRET_LIMIT)) int32_t SECRET_LIMIT;

  __declspec(property(get = get_SecretKey)) uint8_t* SecretKey;

  /// @brief Method CheckKeySize, addr 0x6316688, size 0xa4, virtual false, abstract: false, final false
  inline void CheckKeySize(int32_t isHash64);

  /// @brief Method ConsumeStripes, addr 0x6315f74, size 0x178, virtual false, abstract: false, final false
  inline void ConsumeStripes(uint64_t* acc, ::ByRef<int32_t> nbStripesSoFar, uint8_t* input, int64_t totalStripes, uint8_t* secret, int32_t isHash64);

  /// @brief Method DigestHash128, addr 0x63160ec, size 0x1a4, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 DigestHash128();

  /// @brief Method DigestHash64, addr 0x6316534, size 0x154, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 DigestHash64();

  /// @brief Method DigestLong, addr 0x6316290, size 0x2a4, virtual false, abstract: false, final false
  inline void DigestLong(uint64_t* acc, uint8_t* secret, int32_t isHash64);

  /// @brief Method Reset, addr 0x6315ab8, size 0x204, virtual false, abstract: false, final false
  inline void Reset(bool isHash64, uint64_t seed);

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Update(::ByRef<T> input);

  /// @brief Method Update, addr 0x6315cc8, size 0x2a4, virtual false, abstract: false, final false
  inline void Update(void* input, int32_t length);

  /// @brief Method .ctor, addr 0x6315a38, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(bool isHash64, uint64_t seed);

  static inline int32_t getStaticF_INTERNAL_BUFFER_SIZE();

  static inline int32_t getStaticF_INTERNAL_BUFFER_STRIPES();

  static inline int32_t getStaticF_NB_STRIPES_PER_BLOCK();

  static inline int32_t getStaticF_SECRET_LIMIT();

  /// @brief Method get_Acc, addr 0x6315cbc, size 0x4, virtual false, abstract: false, final false
  inline uint64_t* get_Acc();

  /// @brief Method get_Buffer, addr 0x6315f6c, size 0x8, virtual false, abstract: false, final false
  inline uint8_t* get_Buffer();

  /// @brief Method get_SecretKey, addr 0x6315cc0, size 0x8, virtual false, abstract: false, final false
  inline uint8_t* get_SecretKey();

  static inline void setStaticF_INTERNAL_BUFFER_SIZE(int32_t value);

  static inline void setStaticF_INTERNAL_BUFFER_STRIPES(int32_t value);

  static inline void setStaticF_NB_STRIPES_PER_BLOCK(int32_t value);

  static inline void setStaticF_SECRET_LIMIT(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr xxHash3_StreamingState();

  // Ctor Parameters [CppParam { name: "State", ty: "::Unity::Collections::StreamingState_xxHash3_StreamingStateData", modifiers: "", def_value: None }]
  constexpr xxHash3_StreamingState(::Unity::Collections::StreamingState_xxHash3_StreamingStateData State) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15713 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x220 };

  /// @brief Field State, offset: 0x0, size: 0x220, def value: None
  ::Unity::Collections::StreamingState_xxHash3_StreamingStateData State;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::xxHash3_StreamingState, State) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::xxHash3_StreamingState, 0x220>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.MulticastDelegate
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.xxHash3/Hash64Long_00000A73$PostfixBurstDelegate
class CORDL_TYPE xxHash3_Hash64Long_00000A73$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6316814, size 0x64, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret, ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace,
                                             ::System::Object* _cordl_fixed_empty_name_whitespace_param_5);

  /// @brief Method EndInvoke, addr 0x6316878, size 0x24, virtual true, abstract: false, final false
  inline uint64_t EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6316800, size 0x14, virtual true, abstract: false, final false
  inline uint64_t Invoke(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret);

  static inline ::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate* New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                 ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method .ctor, addr 0x6316780, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr xxHash3_Hash64Long_00000A73$PostfixBurstDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "xxHash3_Hash64Long_00000A73$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  xxHash3_Hash64Long_00000A73$PostfixBurstDelegate(xxHash3_Hash64Long_00000A73$PostfixBurstDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "xxHash3_Hash64Long_00000A73$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  xxHash3_Hash64Long_00000A73$PostfixBurstDelegate(xxHash3_Hash64Long_00000A73$PostfixBurstDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15714 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate, 0x80>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.IntPtr, System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.xxHash3/Hash64Long_00000A73$BurstDirectCall
class CORDL_TYPE xxHash3_Hash64Long_00000A73$BurstDirectCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field Pointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pointer, put = setStaticF_Pointer)) ::System::IntPtr Pointer;

  /// @brief Method GetFunctionPointer, addr 0x63169a8, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointer();

  /// @brief Method GetFunctionPointerDiscard, addr 0x631689c, size 0x10c, virtual false, abstract: false, final false
  static inline void GetFunctionPointerDiscard(::ByRef<::System::IntPtr> _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6314b40, size 0x1b4, virtual false, abstract: false, final false
  static inline uint64_t Invoke(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret);

  static inline ::System::IntPtr getStaticF_Pointer();

  static inline void setStaticF_Pointer(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr xxHash3_Hash64Long_00000A73$BurstDirectCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "xxHash3_Hash64Long_00000A73$BurstDirectCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  xxHash3_Hash64Long_00000A73$BurstDirectCall(xxHash3_Hash64Long_00000A73$BurstDirectCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "xxHash3_Hash64Long_00000A73$BurstDirectCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  xxHash3_Hash64Long_00000A73$BurstDirectCall(xxHash3_Hash64Long_00000A73$BurstDirectCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15715 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.MulticastDelegate
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.xxHash3/Hash128Long_00000A7A$PostfixBurstDelegate
class CORDL_TYPE xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6316a54, size 0xc4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret, ::ByRef<::Unity::Mathematics::uint4> result,
                                             ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace, ::System::Object* _cordl_fixed_empty_name_whitespace_param_6);

  /// @brief Method EndInvoke, addr 0x6316b18, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6316a40, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret, ::ByRef<::Unity::Mathematics::uint4> result);

  static inline ::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate* New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                  ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method .ctor, addr 0x63169c0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate(xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate(xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15716 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate, 0x80>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.IntPtr, System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.xxHash3/Hash128Long_00000A7A$BurstDirectCall
class CORDL_TYPE xxHash3_Hash128Long_00000A7A$BurstDirectCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field Pointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pointer, put = setStaticF_Pointer)) ::System::IntPtr Pointer;

  /// @brief Method GetFunctionPointer, addr 0x6316c30, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointer();

  /// @brief Method GetFunctionPointerDiscard, addr 0x6316b24, size 0x10c, virtual false, abstract: false, final false
  static inline void GetFunctionPointerDiscard(::ByRef<::System::IntPtr> _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6314f70, size 0x1e4, virtual false, abstract: false, final false
  static inline void Invoke(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret, ::ByRef<::Unity::Mathematics::uint4> result);

  static inline ::System::IntPtr getStaticF_Pointer();

  static inline void setStaticF_Pointer(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr xxHash3_Hash128Long_00000A7A$BurstDirectCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "xxHash3_Hash128Long_00000A7A$BurstDirectCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  xxHash3_Hash128Long_00000A7A$BurstDirectCall(xxHash3_Hash128Long_00000A7A$BurstDirectCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "xxHash3_Hash128Long_00000A7A$BurstDirectCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  xxHash3_Hash128Long_00000A7A$BurstDirectCall(xxHash3_Hash128Long_00000A7A$BurstDirectCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15717 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.xxHash3
class CORDL_TYPE xxHash3 : public ::System::Object {
public:
  // Declarations
  using Hash128Long_00000A7A$BurstDirectCall = ::Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall;

  using Hash128Long_00000A7A$PostfixBurstDelegate = ::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate;

  using Hash64Long_00000A73$BurstDirectCall = ::Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall;

  using Hash64Long_00000A73$PostfixBurstDelegate = ::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate;

  using StreamingState = ::Unity::Collections::xxHash3_StreamingState;

  using ulong2 = ::Unity::Collections::xxHash3_ulong2;

  /// @brief Method Avalanche, addr 0x63152fc, size 0x20, virtual false, abstract: false, final false
  static inline uint64_t Avalanche(uint64_t h64);

  /// @brief Method AvalancheH64, addr 0x631531c, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t AvalancheH64(uint64_t h64);

  /// @brief Method Avx2Accumulate, addr 0x631354c, size 0x4, virtual false, abstract: false, final false
  static inline void Avx2Accumulate(uint64_t* acc, uint8_t* input, uint8_t* dest, uint8_t* secret, int64_t nbStripes, int32_t isHash64);

  /// @brief Method Avx2Accumulate512, addr 0x6313554, size 0x4, virtual false, abstract: false, final false
  static inline void Avx2Accumulate512(uint64_t* acc, uint8_t* input, uint8_t* dest, uint8_t* secret);

  /// @brief Method Avx2HashLongInternalLoop, addr 0x6313548, size 0x4, virtual false, abstract: false, final false
  static inline void Avx2HashLongInternalLoop(uint64_t* acc, uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret, int32_t isHash64);

  /// @brief Method Avx2ScrambleAcc, addr 0x6313550, size 0x4, virtual false, abstract: false, final false
  static inline void Avx2ScrambleAcc(uint64_t* acc, uint8_t* secret);

  /// @brief Method DefaultAccumulate, addr 0x63156e4, size 0x88, virtual false, abstract: false, final false
  static inline void DefaultAccumulate(uint64_t* acc, uint8_t* input, uint8_t* dest, uint8_t* secret, int64_t nbStripes, int32_t isHash64);

  /// @brief Method DefaultAccumulate512, addr 0x63157a0, size 0x50, virtual false, abstract: false, final false
  static inline void DefaultAccumulate512(uint64_t* acc, uint8_t* input, uint8_t* dest, uint8_t* secret, int32_t isHash64);

  /// @brief Method DefaultHashLongInternalLoop, addr 0x6315530, size 0x1b4, virtual false, abstract: false, final false
  static inline void DefaultHashLongInternalLoop(uint64_t* acc, uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret, int32_t isHash64);

  /// @brief Method DefaultScrambleAcc, addr 0x631576c, size 0x34, virtual false, abstract: false, final false
  static inline void DefaultScrambleAcc(uint64_t* acc, uint8_t* secret);

  /// @brief Method EncodeSecretKey, addr 0x6314214, size 0x34, virtual false, abstract: false, final false
  static inline void EncodeSecretKey(uint8_t* dst, uint8_t* secret, uint64_t seed);

  /// @brief Method Hash128, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Mathematics::uint4 Hash128(::ByRef<T> input);

  /// @brief Method Hash128, addr 0x6313af8, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 Hash128(void* input, void* destination, int64_t length);

  /// @brief Method Hash128, addr 0x6313c60, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 Hash128(void* input, void* destination, int64_t length, uint64_t seed);

  /// @brief Method Hash128, addr 0x631381c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 Hash128(void* input, int64_t length);

  /// @brief Method Hash128, addr 0x6313bac, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 Hash128(void* input, int64_t length, uint64_t seed);

  /// @brief Method Hash128Internal, addr 0x63138cc, size 0x22c, virtual false, abstract: false, final false
  static inline void Hash128Internal(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret, uint64_t seed, ::ByRef<::Unity::Mathematics::uint4> result);

  /// @brief Method Hash128Len0To16, addr 0x6314248, size 0x8c, virtual false, abstract: false, final false
  static inline void Hash128Len0To16(uint8_t* input, int64_t length, uint8_t* secret, uint64_t seed, ::ByRef<::Unity::Mathematics::uint4> result);

  /// @brief Method Hash128Len129To240, addr 0x6314690, size 0x354, virtual false, abstract: false, final false
  static inline void Hash128Len129To240(uint8_t* input, int64_t length, uint8_t* secret, uint64_t seed, ::ByRef<::Unity::Mathematics::uint4> result);

  /// @brief Method Hash128Len17To128, addr 0x63142d4, size 0x3bc, virtual false, abstract: false, final false
  static inline void Hash128Len17To128(uint8_t* input, int64_t length, uint8_t* secret, uint64_t seed, ::ByRef<::Unity::Mathematics::uint4> result);

  /// @brief Method Hash128Len1To3, addr 0x6314cf4, size 0x9c, virtual false, abstract: false, final false
  static inline void Hash128Len1To3(uint8_t* input, int64_t length, uint8_t* secret, uint64_t seed, ::ByRef<::Unity::Mathematics::uint4> result);

  /// @brief Method Hash128Len4To8, addr 0x6314d94, size 0xb8, virtual false, abstract: false, final false
  static inline void Hash128Len4To8(uint8_t* input, int64_t len, uint8_t* secret, uint64_t seed, ::ByRef<::Unity::Mathematics::uint4> result);

  /// @brief Method Hash128Len9To16, addr 0x6314e4c, size 0x11c, virtual false, abstract: false, final false
  static inline void Hash128Len9To16(uint8_t* input, int64_t len, uint8_t* secret, uint64_t seed, ::ByRef<::Unity::Mathematics::uint4> result);

  /// @brief Method Hash128Long, addr 0x6313544, size 0x4, virtual false, abstract: false, final false
  static inline void Hash128Long(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret, ::ByRef<::Unity::Mathematics::uint4> result);

  /// @brief Method Hash128Long$BurstManaged, addr 0x6315900, size 0x138, virtual false, abstract: false, final false
  static inline void Hash128Long$BurstManaged(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret, ::ByRef<::Unity::Mathematics::uint4> result);

  /// @brief Method Hash64, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Mathematics::uint2 Hash64(::ByRef<T> input);

  /// @brief Method Hash64, addr 0x6313558, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 Hash64(void* input, int64_t length);

  /// @brief Method Hash64, addr 0x6313780, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 Hash64(void* input, int64_t length, uint64_t seed);

  /// @brief Method Hash64Internal, addr 0x63135f0, size 0x18c, virtual false, abstract: false, final false
  static inline uint64_t Hash64Internal(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret, uint64_t seed);

  /// @brief Method Hash64Len0To16, addr 0x6313d20, size 0x68, virtual false, abstract: false, final false
  static inline uint64_t Hash64Len0To16(uint8_t* input, int64_t length, uint8_t* secret, uint64_t seed);

  /// @brief Method Hash64Len129To240, addr 0x6314090, size 0x184, virtual false, abstract: false, final false
  static inline uint64_t Hash64Len129To240(uint8_t* input, int64_t length, uint8_t* secret, uint64_t seed);

  /// @brief Method Hash64Len17To128, addr 0x6313d88, size 0x308, virtual false, abstract: false, final false
  static inline uint64_t Hash64Len17To128(uint8_t* input, int64_t length, uint8_t* secret, uint64_t seed);

  /// @brief Method Hash64Len1To3, addr 0x63149e4, size 0x6c, virtual false, abstract: false, final false
  static inline uint64_t Hash64Len1To3(uint8_t* input, int64_t len, uint8_t* secret, uint64_t seed);

  /// @brief Method Hash64Len4To8, addr 0x6314a50, size 0x5c, virtual false, abstract: false, final false
  static inline uint64_t Hash64Len4To8(uint8_t* input, int64_t length, uint8_t* secret, uint64_t seed);

  /// @brief Method Hash64Len9To16, addr 0x6314aac, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t Hash64Len9To16(uint8_t* input, int64_t length, uint8_t* secret, uint64_t seed);

  /// @brief Method Hash64Long, addr 0x6313540, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t Hash64Long(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret);

  /// @brief Method Hash64Long$BurstManaged, addr 0x63157f0, size 0x110, virtual false, abstract: false, final false
  static inline uint64_t Hash64Long$BurstManaged(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret);

  /// @brief Method MergeAcc, addr 0x63153d0, size 0x160, virtual false, abstract: false, final false
  static inline uint64_t MergeAcc(uint64_t* acc, uint8_t* secret, uint64_t start);

  /// @brief Method Mix16, addr 0x63151ec, size 0x54, virtual false, abstract: false, final false
  static inline uint64_t Mix16(uint8_t* input, uint8_t* secret, uint64_t seed);

  /// @brief Method Mix2Acc, addr 0x6315388, size 0x48, virtual false, abstract: false, final false
  static inline uint64_t Mix2Acc(uint64_t acc0, uint64_t acc1, uint8_t* secret);

  /// @brief Method Mix32, addr 0x6315240, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Collections::xxHash3_ulong2 Mix32(::Unity::Collections::xxHash3_ulong2 acc, uint8_t* input_1, uint8_t* input_2, uint8_t* secret, uint64_t seed);

  /// @brief Method Mul128Fold64, addr 0x63151b0, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t Mul128Fold64(uint64_t lhs, uint64_t rhs);

  /// @brief Method Mul32To64, addr 0x6315174, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t Mul32To64(uint32_t x, uint32_t y);

  /// @brief Method Read32LE, addr 0x631515c, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t Read32LE(void* addr);

  /// @brief Method Read32LE, addr 0x631516c, size 0x8, virtual false, abstract: false, final false
  static inline void Read32LE(void* addr, uint32_t value);

  /// @brief Method Read64LE, addr 0x6315154, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t Read64LE(void* addr);

  /// @brief Method RotL32, addr 0x631518c, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t RotL32(uint32_t x, int32_t r);

  /// @brief Method RotL64, addr 0x6315198, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t RotL64(uint64_t x, int32_t r);

  /// @brief Method Swap32, addr 0x6315184, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t Swap32(uint32_t x);

  /// @brief Method Swap64, addr 0x631517c, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t Swap64(uint64_t x);

  /// @brief Method ToUint2, addr 0x631377c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 ToUint2(uint64_t u);

  /// @brief Method ToUint4, addr 0x6314d90, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 ToUint4(uint64_t ul0, uint64_t ul1);

  /// @brief Method Write64LE, addr 0x6315164, size 0x8, virtual false, abstract: false, final false
  static inline void Write64LE(void* addr, uint64_t value);

  /// @brief Method XorShift64, addr 0x63151a4, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t XorShift64(uint64_t v64, int32_t shift);

  /// @brief Method rrmxmx, addr 0x6315354, size 0x34, virtual false, abstract: false, final false
  static inline uint64_t rrmxmx(uint64_t h64, uint64_t length);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr xxHash3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "xxHash3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  xxHash3(xxHash3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "xxHash3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  xxHash3(xxHash3 const&) = delete;

  /// @brief Field ACC_NB offset 0xffffffff size 0x4
  static constexpr int32_t ACC_NB{ static_cast<int32_t>(0x8) };

  /// @brief Field BLOCK_LEN offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK_LEN{ static_cast<int32_t>(0x400) };

  /// @brief Field MIDSIZE_LASTOFFSET offset 0xffffffff size 0x4
  static constexpr int32_t MIDSIZE_LASTOFFSET{ static_cast<int32_t>(0x11) };

  /// @brief Field MIDSIZE_MAX offset 0xffffffff size 0x4
  static constexpr int32_t MIDSIZE_MAX{ static_cast<int32_t>(0xf0) };

  /// @brief Field MIDSIZE_STARTOFFSET offset 0xffffffff size 0x4
  static constexpr int32_t MIDSIZE_STARTOFFSET{ static_cast<int32_t>(0x3) };

  /// @brief Field NB_ROUNDS offset 0xffffffff size 0x4
  static constexpr int32_t NB_ROUNDS{ static_cast<int32_t>(0x10) };

  /// @brief Field PRIME32_1 offset 0xffffffff size 0x4
  static constexpr uint32_t PRIME32_1{ static_cast<uint32_t>(0x9e3779b1u) };

  /// @brief Field PRIME32_2 offset 0xffffffff size 0x4
  static constexpr uint32_t PRIME32_2{ static_cast<uint32_t>(0x85ebca77u) };

  /// @brief Field PRIME32_3 offset 0xffffffff size 0x4
  static constexpr uint32_t PRIME32_3{ static_cast<uint32_t>(0xc2b2ae3du) };

  /// @brief Field PRIME32_5 offset 0xffffffff size 0x4
  static constexpr uint32_t PRIME32_5{ static_cast<uint32_t>(0x165667b1u) };

  /// @brief Field PRIME64_1 offset 0xffffffff size 0x8
  static constexpr uint64_t PRIME64_1{ static_cast<uint64_t>(0x9e3779b185ebca87u) };

  /// @brief Field PRIME64_2 offset 0xffffffff size 0x8
  static constexpr uint64_t PRIME64_2{ static_cast<uint64_t>(0xc2b2ae3d27d4eb4fu) };

  /// @brief Field PRIME64_3 offset 0xffffffff size 0x8
  static constexpr uint64_t PRIME64_3{ static_cast<uint64_t>(0x165667b19e3779f9u) };

  /// @brief Field PRIME64_4 offset 0xffffffff size 0x8
  static constexpr uint64_t PRIME64_4{ static_cast<uint64_t>(0x85ebca77c2b2ae63u) };

  /// @brief Field PRIME64_5 offset 0xffffffff size 0x8
  static constexpr uint64_t PRIME64_5{ static_cast<uint64_t>(0x27d4eb2f165667c5u) };

  /// @brief Field SECRET_CONSUME_RATE offset 0xffffffff size 0x4
  static constexpr int32_t SECRET_CONSUME_RATE{ static_cast<int32_t>(0x8) };

  /// @brief Field SECRET_KEY_MIN_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t SECRET_KEY_MIN_SIZE{ static_cast<int32_t>(0x88) };

  /// @brief Field SECRET_KEY_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t SECRET_KEY_SIZE{ static_cast<int32_t>(0xc0) };

  /// @brief Field SECRET_LASTACC_START offset 0xffffffff size 0x4
  static constexpr int32_t SECRET_LASTACC_START{ static_cast<int32_t>(0x7) };

  /// @brief Field SECRET_MERGEACCS_START offset 0xffffffff size 0x4
  static constexpr int32_t SECRET_MERGEACCS_START{ static_cast<int32_t>(0xb) };

  /// @brief Field STRIPE_LEN offset 0xffffffff size 0x4
  static constexpr int32_t STRIPE_LEN{ static_cast<int32_t>(0x40) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15718 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::xxHash3, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::xxHash3);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::xxHash3*, "Unity.Collections", "xxHash3");
NEED_NO_BOX(::Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::xxHash3_Hash128Long_00000A7A$BurstDirectCall*, "Unity.Collections", "xxHash3/Hash128Long_00000A7A$BurstDirectCall");
NEED_NO_BOX(::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::xxHash3_Hash128Long_00000A7A$PostfixBurstDelegate*, "Unity.Collections", "xxHash3/Hash128Long_00000A7A$PostfixBurstDelegate");
NEED_NO_BOX(::Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::xxHash3_Hash64Long_00000A73$BurstDirectCall*, "Unity.Collections", "xxHash3/Hash64Long_00000A73$BurstDirectCall");
NEED_NO_BOX(::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::xxHash3_Hash64Long_00000A73$PostfixBurstDelegate*, "Unity.Collections", "xxHash3/Hash64Long_00000A73$PostfixBurstDelegate");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::StreamingState_xxHash3_StreamingStateData, "Unity.Collections", "xxHash3/StreamingState/StreamingStateData");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::xxHash3_StreamingState, "Unity.Collections", "xxHash3/StreamingState");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::xxHash3_ulong2, "Unity.Collections", "xxHash3/ulong2");
