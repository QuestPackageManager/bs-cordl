#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/BurstLike.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstLike)
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct __BurstLike__SharedStatic_1;
}
namespace Unity::Collections::LowLevel::Unsafe {
class __BurstLike__SharedStatic;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class BurstLike;
}
namespace Unity::Collections::LowLevel::Unsafe {
class __BurstLike__SharedStatic;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct __BurstLike__SharedStatic_1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::BurstLike);
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic);
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic_1);
// Type: ::SharedStatic`1
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::BurstLike::SharedStatic`1<T>
struct CORDL_TYPE __BurstLike__SharedStatic_1 {
public:
  // Declarations
  __declspec(property(get = get_Data)) T Data;

  /// @brief Method GetOrCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContext> static inline ::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic_1<T> GetOrCreate(uint32_t alignment);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<void> buffer);

  /// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ByRef<T> get_Data();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstLike__SharedStatic_1();

  // Ctor Parameters [CppParam { name: "_buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }]
  constexpr __BurstLike__SharedStatic_1(::cordl_internals::Ptr<void> _buffer) noexcept;

  /// @brief Field _buffer, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> _buffer;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10570 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections::LowLevel::Unsafe
// Type: ::SharedStatic
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: ::BurstLike::SharedStatic*
class CORDL_TYPE __BurstLike__SharedStatic : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetOrCreateSharedStaticInternal, addr 0x47e8ed4, size 0x74, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<void> GetOrCreateSharedStaticInternal(int64_t getHashCode64, int64_t getSubHashCode64, uint32_t sizeOf, uint32_t alignment);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstLike__SharedStatic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BurstLike__SharedStatic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BurstLike__SharedStatic(__BurstLike__SharedStatic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BurstLike__SharedStatic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BurstLike__SharedStatic(__BurstLike__SharedStatic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10571 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
// Type: Unity.Collections.LowLevel.Unsafe::BurstLike
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: ::Unity.Collections.LowLevel.Unsafe::BurstLike*
class CORDL_TYPE BurstLike : public ::System::Object {
public:
  // Declarations
  using SharedStatic = ::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic;

  template <typename T> using SharedStatic_1 = ::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic_1<T>;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstLike();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstLike", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstLike(BurstLike&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstLike", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstLike(BurstLike const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10572 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::BurstLike, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::BurstLike);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::BurstLike*, "Unity.Collections.LowLevel.Unsafe", "BurstLike");
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic*, "Unity.Collections.LowLevel.Unsafe", "BurstLike/SharedStatic");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic_1, "Unity.Collections.LowLevel.Unsafe", "BurstLike/SharedStatic`1");
