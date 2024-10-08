#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateBuffers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBuffers_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputStateBuffers)
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputStateBuffers__DoubleBuffers;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBuffers;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputStateBuffers__DoubleBuffers;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputStateBuffers);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers);
// Type: ::DoubleBuffers
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::InputStateBuffers::DoubleBuffers
struct CORDL_TYPE __InputStateBuffers__DoubleBuffers {
public:
  // Declarations
  __declspec(property(get = get_valid)) bool valid;

  /// @brief Method GetBackBuffer, addr 0x459e388, size 0x14, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> GetBackBuffer(int32_t deviceIndex);

  /// @brief Method GetFrontBuffer, addr 0x459e320, size 0x10, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> GetFrontBuffer(int32_t deviceIndex);

  /// @brief Method SetBackBuffer, addr 0x459e590, size 0x14, virtual false, abstract: false, final false
  inline void SetBackBuffer(int32_t deviceIndex, ::cordl_internals::Ptr<void> ptr);

  /// @brief Method SetFrontBuffer, addr 0x459e580, size 0x10, virtual false, abstract: false, final false
  inline void SetFrontBuffer(int32_t deviceIndex, ::cordl_internals::Ptr<void> ptr);

  /// @brief Method SwapBuffers, addr 0x459eb30, size 0x28, virtual false, abstract: false, final false
  inline void SwapBuffers(int32_t deviceIndex);

  /// @brief Method get_valid, addr 0x459eb20, size 0x10, virtual false, abstract: false, final false
  inline bool get_valid();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputStateBuffers__DoubleBuffers();

  // Ctor Parameters [CppParam { name: "deviceToBufferMapping", ty: "::cordl_internals::Ptr<::cordl_internals::Ptr<void>>", modifiers: "", def_value: None }]
  constexpr __InputStateBuffers__DoubleBuffers(::cordl_internals::Ptr<::cordl_internals::Ptr<void>> deviceToBufferMapping) noexcept;

  /// @brief Field deviceToBufferMapping, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<::cordl_internals::Ptr<void>> deviceToBufferMapping;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6942 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers, deviceToBufferMapping) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InputStateBuffers
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputStateBuffers
struct CORDL_TYPE InputStateBuffers {
public:
  // Declarations
  using DoubleBuffers = ::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers;

  /// @brief Field s_CurrentBuffers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CurrentBuffers, put = setStaticF_s_CurrentBuffers)) ::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers s_CurrentBuffers;

  /// @brief Field s_DefaultStateBuffer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultStateBuffer, put = setStaticF_s_DefaultStateBuffer)) ::cordl_internals::Ptr<void> s_DefaultStateBuffer;

  /// @brief Field s_NoiseMaskBuffer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_NoiseMaskBuffer, put = setStaticF_s_NoiseMaskBuffer)) ::cordl_internals::Ptr<void> s_NoiseMaskBuffer;

  /// @brief Field s_ResetMaskBuffer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ResetMaskBuffer, put = setStaticF_s_ResetMaskBuffer)) ::cordl_internals::Ptr<void> s_ResetMaskBuffer;

  /// @brief Method AllocateAll, addr 0x459e400, size 0xb4, virtual false, abstract: false, final false
  inline void AllocateAll(::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> devices, int32_t deviceCount);

  /// @brief Method ComputeSizeOfSingleStateBuffer, addr 0x459e4b4, size 0x6c, virtual false, abstract: false, final false
  static inline uint32_t ComputeSizeOfSingleStateBuffer(::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> devices, int32_t deviceCount);

  /// @brief Method FreeAll, addr 0x459e5a4, size 0xc0, virtual false, abstract: false, final false
  inline void FreeAll();

  /// @brief Method GetBackBufferForDevice, addr 0x459e330, size 0x58, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<void> GetBackBufferForDevice(int32_t deviceIndex);

  /// @brief Method GetDoubleBuffersFor, addr 0x459e1f8, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers GetDoubleBuffersFor(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType);

  /// @brief Method GetFrontBufferForDevice, addr 0x459e2cc, size 0x54, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<void> GetFrontBufferForDevice(int32_t deviceIndex);

  /// @brief Method MigrateAll, addr 0x459e664, size 0x158, virtual false, abstract: false, final false
  inline void MigrateAll(::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> devices, int32_t deviceCount,
                         ::UnityEngine::InputSystem::LowLevel::InputStateBuffers oldBuffers);

  /// @brief Method MigrateDoubleBuffer, addr 0x459e7bc, size 0x170, virtual false, abstract: false, final false
  static inline void MigrateDoubleBuffer(::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers newBuffer,
                                         ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> devices, int32_t deviceCount,
                                         ::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers oldBuffer);

  /// @brief Method MigrateSingleBuffer, addr 0x459e92c, size 0x108, virtual false, abstract: false, final false
  static inline void MigrateSingleBuffer(::cordl_internals::Ptr<void> newBuffer, ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> devices,
                                         int32_t deviceCount, ::cordl_internals::Ptr<void> oldBuffer);

  /// @brief Method NextDeviceOffset, addr 0x459ea34, size 0xec, virtual false, abstract: false, final false
  static inline uint32_t NextDeviceOffset(uint32_t currentOffset, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method SetUpDeviceToBufferMappings, addr 0x459e520, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers SetUpDeviceToBufferMappings(int32_t deviceCount, ByRef<::cordl_internals::Ptr<uint8_t>> bufferPtr,
                                                                                                                     uint32_t sizePerBuffer, uint32_t mappingTableSizePerBuffer);

  /// @brief Method SwitchTo, addr 0x459e39c, size 0x64, virtual false, abstract: false, final false
  static inline void SwitchTo(::UnityEngine::InputSystem::LowLevel::InputStateBuffers buffers, ::UnityEngine::InputSystem::LowLevel::InputUpdateType update);

  static inline ::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers getStaticF_s_CurrentBuffers();

  static inline ::cordl_internals::Ptr<void> getStaticF_s_DefaultStateBuffer();

  static inline ::cordl_internals::Ptr<void> getStaticF_s_NoiseMaskBuffer();

  static inline ::cordl_internals::Ptr<void> getStaticF_s_ResetMaskBuffer();

  static inline void setStaticF_s_CurrentBuffers(::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers value);

  static inline void setStaticF_s_DefaultStateBuffer(::cordl_internals::Ptr<void> value);

  static inline void setStaticF_s_NoiseMaskBuffer(::cordl_internals::Ptr<void> value);

  static inline void setStaticF_s_ResetMaskBuffer(::cordl_internals::Ptr<void> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputStateBuffers();

  // Ctor Parameters [CppParam { name: "sizePerBuffer", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "totalSize", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "defaultStateBuffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "noiseMaskBuffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value:
  // None }, CppParam { name: "resetMaskBuffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_AllBuffers", ty: "::cordl_internals::Ptr<void>", modifiers:
  // "", def_value: None }, CppParam { name: "m_PlayerStateBuffers", ty: "::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers", modifiers: "", def_value: None }]
  constexpr InputStateBuffers(uint32_t sizePerBuffer, uint32_t totalSize, ::cordl_internals::Ptr<void> defaultStateBuffer, ::cordl_internals::Ptr<void> noiseMaskBuffer,
                              ::cordl_internals::Ptr<void> resetMaskBuffer, ::cordl_internals::Ptr<void> m_AllBuffers,
                              ::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers m_PlayerStateBuffers) noexcept;

  /// @brief Field sizePerBuffer, offset: 0x0, size: 0x4, def value: None
  uint32_t sizePerBuffer;

  /// @brief Field totalSize, offset: 0x4, size: 0x4, def value: None
  uint32_t totalSize;

  /// @brief Field defaultStateBuffer, offset: 0x8, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> defaultStateBuffer;

  /// @brief Field noiseMaskBuffer, offset: 0x10, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> noiseMaskBuffer;

  /// @brief Field resetMaskBuffer, offset: 0x18, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> resetMaskBuffer;

  /// @brief Field m_AllBuffers, offset: 0x20, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> m_AllBuffers;

  /// @brief Field m_PlayerStateBuffers, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers m_PlayerStateBuffers;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6943 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputStateBuffers, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, sizePerBuffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, totalSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, defaultStateBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, noiseMaskBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, resetMaskBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, m_AllBuffers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, m_PlayerStateBuffers) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, "UnityEngine.InputSystem.LowLevel", "InputStateBuffers");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers, "UnityEngine.InputSystem.LowLevel", "InputStateBuffers/DoubleBuffers");
