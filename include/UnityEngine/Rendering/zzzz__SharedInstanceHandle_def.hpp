#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SharedInstanceHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SharedInstanceHandle)
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct SharedInstanceHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::SharedInstanceHandle);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SharedInstanceHandle
struct CORDL_TYPE SharedInstanceHandle {
public:
  // Declarations
  /// @brief Field Invalid, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Invalid, put = setStaticF_Invalid)) ::UnityEngine::Rendering::SharedInstanceHandle Invalid;

  __declspec(property(get = get_index, put = set_index)) int32_t index;

  __declspec(property(get = get_valid)) bool valid;

  /// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Rendering::SharedInstanceHandle>"
  constexpr operator ::System::IComparable_1<::UnityEngine::Rendering::SharedInstanceHandle>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::SharedInstanceHandle>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::SharedInstanceHandle>*();

  /// @brief Method CompareTo, addr 0x660457c, size 0x70, virtual true, abstract: false, final true
  inline int32_t CompareTo(::UnityEngine::Rendering::SharedInstanceHandle other);

  /// @brief Method Equals, addr 0x6604510, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::SharedInstanceHandle other);

  /// @brief Method GetHashCode, addr 0x66045ec, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Rendering::SharedInstanceHandle getStaticF_Invalid();

  /// @brief Method get_index, addr 0x66044a0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_valid, addr 0x66044b0, size 0x60, virtual false, abstract: false, final false
  inline bool get_valid();

  /// @brief Convert to "::System::IComparable_1<::UnityEngine::Rendering::SharedInstanceHandle>"
  constexpr ::System::IComparable_1<::UnityEngine::Rendering::SharedInstanceHandle>* i___System__IComparable_1___UnityEngine__Rendering__SharedInstanceHandle_();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::SharedInstanceHandle>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::SharedInstanceHandle>* i___System__IEquatable_1___UnityEngine__Rendering__SharedInstanceHandle_();

  static inline void setStaticF_Invalid(::UnityEngine::Rendering::SharedInstanceHandle value);

  /// @brief Method set_index, addr 0x66044a8, size 0x8, virtual false, abstract: false, final false
  inline void set_index(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedInstanceHandle();

  // Ctor Parameters [CppParam { name: "_index_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SharedInstanceHandle(int32_t _index_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17644 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field <index>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _index_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SharedInstanceHandle, _index_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SharedInstanceHandle, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SharedInstanceHandle, "UnityEngine.Rendering", "SharedInstanceHandle");
