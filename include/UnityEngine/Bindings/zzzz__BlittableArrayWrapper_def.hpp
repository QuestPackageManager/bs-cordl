#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/BlittableArrayWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlittableArrayWrapper)
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper_UpdateFlags;
}
// Forward declare root types
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper_UpdateFlags;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags);
MARK_VAL_T(::UnityEngine::Bindings::BlittableArrayWrapper);
// Dependencies
namespace UnityEngine::Bindings {
// Is value type: true
// CS Name: UnityEngine.Bindings.BlittableArrayWrapper/UpdateFlags
struct CORDL_TYPE BlittableArrayWrapper_UpdateFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BlittableArrayWrapper_UpdateFlags_Unwrapped
  enum struct __BlittableArrayWrapper_UpdateFlags_Unwrapped : int32_t {
    __E_NoUpdateNeeded = static_cast<int32_t>(0x0),
    __E_SizeChanged = static_cast<int32_t>(0x1),
    __E_DataIsNativePointer = static_cast<int32_t>(0x2),
    __E_DataIsNativeOwnedMemory = static_cast<int32_t>(0x3),
    __E_DataIsEmpty = static_cast<int32_t>(0x4),
    __E_DataIsNull = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BlittableArrayWrapper_UpdateFlags_Unwrapped() const noexcept {
    return static_cast<__BlittableArrayWrapper_UpdateFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BlittableArrayWrapper_UpdateFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BlittableArrayWrapper_UpdateFlags(int32_t value__) noexcept;

  /// @brief Field DataIsEmpty value: I32(4)
  static ::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags const DataIsEmpty;

  /// @brief Field DataIsNativeOwnedMemory value: I32(3)
  static ::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags const DataIsNativeOwnedMemory;

  /// @brief Field DataIsNativePointer value: I32(2)
  static ::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags const DataIsNativePointer;

  /// @brief Field DataIsNull value: I32(5)
  static ::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags const DataIsNull;

  /// @brief Field NoUpdateNeeded value: I32(0)
  static ::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags const NoUpdateNeeded;

  /// @brief Field SizeChanged value: I32(1)
  static ::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags const SizeChanged;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10445 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Bindings
// Dependencies UnityEngine.Bindings.BlittableArrayWrapper::UpdateFlags
namespace UnityEngine::Bindings {
// Is value type: true
// CS Name: UnityEngine.Bindings.BlittableArrayWrapper
struct CORDL_TYPE BlittableArrayWrapper {
public:
  // Declarations
  using UpdateFlags = ::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags;

  /// @brief Method Unmarshal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Unmarshal(::ByRef<::ArrayW<T, ::Array<T>*>> array);

  /// @brief Method .ctor, addr 0x68cb0e0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(void* data, int32_t size);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BlittableArrayWrapper();

  // Ctor Parameters [CppParam { name: "data", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "updateFlags",
  // ty: "::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags", modifiers: "", def_value: None }]
  constexpr BlittableArrayWrapper(void* data, int32_t size, ::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags updateFlags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10446 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field data, offset: 0x0, size: 0x8, def value: None
  void* data;

  /// @brief Field size, offset: 0x8, size: 0x4, def value: None
  int32_t size;

  /// @brief Field updateFlags, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags updateFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bindings::BlittableArrayWrapper, data) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Bindings::BlittableArrayWrapper, size) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Bindings::BlittableArrayWrapper, updateFlags) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::BlittableArrayWrapper, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Bindings
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags, "UnityEngine.Bindings", "BlittableArrayWrapper/UpdateFlags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::BlittableArrayWrapper, "UnityEngine.Bindings", "BlittableArrayWrapper");
