#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceHandle)
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::Rendering {
struct InstanceType;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::InstanceHandle);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceHandle
struct CORDL_TYPE InstanceHandle {
public:
  // Declarations
  /// @brief Field Invalid, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Invalid, put = setStaticF_Invalid)) ::UnityEngine::Rendering::InstanceHandle Invalid;

  __declspec(property(get = get_index, put = set_index)) int32_t index;

  __declspec(property(get = get_instanceIndex)) int32_t instanceIndex;

  __declspec(property(get = get_type)) ::UnityEngine::Rendering::InstanceType type;

  __declspec(property(get = get_valid)) bool valid;

  /// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Rendering::InstanceHandle>"
  constexpr operator ::System::IComparable_1<::UnityEngine::Rendering::InstanceHandle>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::InstanceHandle>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::InstanceHandle>*();

  /// @brief Method CompareTo, addr 0x666bf14, size 0x70, virtual true, abstract: false, final true
  inline int32_t CompareTo(::UnityEngine::Rendering::InstanceHandle other);

  /// @brief Method Create, addr 0x66698e4, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::InstanceHandle Create(int32_t instanceIndex, ::UnityEngine::Rendering::InstanceType instanceType);

  /// @brief Method Equals, addr 0x666bea8, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::InstanceHandle other);

  /// @brief Method FromInt, addr 0x66652ac, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::InstanceHandle FromInt(int32_t value);

  /// @brief Method GetHashCode, addr 0x666bf84, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Rendering::InstanceHandle getStaticF_Invalid();

  /// @brief Method get_index, addr 0x666be98, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_instanceIndex, addr 0x66696b8, size 0x5c, virtual false, abstract: false, final false
  inline int32_t get_instanceIndex();

  /// @brief Method get_type, addr 0x666965c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::InstanceType get_type();

  /// @brief Method get_valid, addr 0x66695fc, size 0x60, virtual false, abstract: false, final false
  inline bool get_valid();

  /// @brief Convert to "::System::IComparable_1<::UnityEngine::Rendering::InstanceHandle>"
  constexpr ::System::IComparable_1<::UnityEngine::Rendering::InstanceHandle>* i___System__IComparable_1___UnityEngine__Rendering__InstanceHandle_();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::InstanceHandle>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::InstanceHandle>* i___System__IEquatable_1___UnityEngine__Rendering__InstanceHandle_();

  static inline void setStaticF_Invalid(::UnityEngine::Rendering::InstanceHandle value);

  /// @brief Method set_index, addr 0x666bea0, size 0x8, virtual false, abstract: false, final false
  inline void set_index(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceHandle();

  // Ctor Parameters [CppParam { name: "_index_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InstanceHandle(int32_t _index_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17657 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field <index>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _index_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceHandle, _index_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceHandle, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceHandle, "UnityEngine.Rendering", "InstanceHandle");
