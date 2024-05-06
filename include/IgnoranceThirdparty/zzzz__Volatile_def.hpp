#pragma once
// IWYU pragma private; include "IgnoranceThirdparty/Volatile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Volatile)
namespace IgnoranceThirdparty {
struct __Volatile__PaddedLong;
}
// Forward declare root types
namespace IgnoranceThirdparty {
class Volatile;
}
namespace IgnoranceThirdparty {
struct __Volatile__PaddedLong;
}
// Write type traits
MARK_REF_PTR_T(::IgnoranceThirdparty::Volatile);
MARK_VAL_T(::IgnoranceThirdparty::__Volatile__PaddedLong);
// Type: ::PaddedLong
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: Some(0) }
namespace IgnoranceThirdparty {
// Is value type: true
// CS Name: ::Volatile::PaddedLong
#pragma pack(push, 0)
struct CORDL_TYPE __Volatile__PaddedLong {
public:
  // Declarations
  /// @brief Field _value, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) int64_t _value;

  /// @brief Method AtomicAddAndGet, addr 0x25d3b5c, size 0xc, virtual false, abstract: false, final false
  inline int64_t AtomicAddAndGet(int64_t delta);

  /// @brief Method AtomicCompareExchange, addr 0x25d3b2c, size 0x24, virtual false, abstract: false, final false
  inline bool AtomicCompareExchange(int64_t newValue, int64_t comparand);

  /// @brief Method AtomicDecrementAndGet, addr 0x25d3b74, size 0xc, virtual false, abstract: false, final false
  inline int64_t AtomicDecrementAndGet();

  /// @brief Method AtomicExchange, addr 0x25d3b50, size 0xc, virtual false, abstract: false, final false
  inline int64_t AtomicExchange(int64_t newValue);

  /// @brief Method AtomicIncrementAndGet, addr 0x25d3b68, size 0xc, virtual false, abstract: false, final false
  inline int64_t AtomicIncrementAndGet();

  /// @brief Method ReadAcquireFence, addr 0x25d3a4c, size 0x1c, virtual false, abstract: false, final false
  inline int64_t ReadAcquireFence();

  /// @brief Method ReadCompilerOnlyFence, addr 0x25d3a84, size 0x24, virtual false, abstract: false, final false
  inline int64_t ReadCompilerOnlyFence();

  /// @brief Method ReadFullFence, addr 0x25d3a68, size 0x1c, virtual false, abstract: false, final false
  inline int64_t ReadFullFence();

  /// @brief Method ReadUnfenced, addr 0x25d3a44, size 0x8, virtual false, abstract: false, final false
  inline int64_t ReadUnfenced();

  /// @brief Method ToString, addr 0x25d3b80, size 0x34, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method WriteCompilerOnlyFence, addr 0x25d3af8, size 0x2c, virtual false, abstract: false, final false
  inline void WriteCompilerOnlyFence(int64_t newValue);

  /// @brief Method WriteFullFence, addr 0x25d3ad0, size 0x28, virtual false, abstract: false, final false
  inline void WriteFullFence(int64_t newValue);

  /// @brief Method WriteReleaseFence, addr 0x25d3aa8, size 0x28, virtual false, abstract: false, final false
  inline void WriteReleaseFence(int64_t newValue);

  /// @brief Method WriteUnfenced, addr 0x25d3b24, size 0x8, virtual false, abstract: false, final false
  inline void WriteUnfenced(int64_t newValue);

  constexpr int64_t const& __cordl_internal_get__value() const;

  constexpr int64_t& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__value(int64_t value);

  /// @brief Method .ctor, addr 0x25d3a3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Volatile__PaddedLong();

  // Ctor Parameters [CppParam { name: "_value", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr __Volatile__PaddedLong(int64_t _value) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x40
      uint8_t ____value_padding[0x40];
      /// @brief Field _value, offset: 0x40, size: 0x8, def value: None
      int64_t ____value;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x40 for alignment
      uint8_t ____value_padding_forAlignment[0x40];
      /// @brief Field _value, offset: 0x40, size: 0x8, def value: None
      int64_t ____value_forAlignment;
    };
  };

public:
  /// @brief Size padding 0x80 - 0x48 = 0x38, packed as 0x38
  uint8_t _cordl_size_padding[0x38];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceThirdparty::__Volatile__PaddedLong, 0x80>, "Size mismatch!");

} // namespace IgnoranceThirdparty
// Type: IgnoranceThirdparty::Volatile
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace IgnoranceThirdparty {
// Is value type: false
// CS Name: ::IgnoranceThirdparty::Volatile*
class CORDL_TYPE Volatile : public ::System::Object {
public:
  // Declarations
  using PaddedLong = ::IgnoranceThirdparty::__Volatile__PaddedLong;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Volatile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Volatile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Volatile(Volatile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Volatile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Volatile(Volatile const&) = delete;

  /// @brief Field CacheLineSize offset 0xffffffff size 0x4
  static constexpr int32_t CacheLineSize{ static_cast<int32_t>(0x40) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceThirdparty::Volatile, 0x10>, "Size mismatch!");

} // namespace IgnoranceThirdparty
NEED_NO_BOX(::IgnoranceThirdparty::Volatile);
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceThirdparty::Volatile*, "IgnoranceThirdparty", "Volatile");
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceThirdparty::__Volatile__PaddedLong, "IgnoranceThirdparty", "Volatile/PaddedLong");
