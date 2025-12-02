#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateBuffers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputStateBuffers)
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBuffers_DoubleBuffers;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBuffers;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBuffers_DoubleBuffers;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputStateBuffers);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers);
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateBuffers/DoubleBuffers
struct CORDL_TYPE InputStateBuffers_DoubleBuffers {
public:
  // Declarations
  __declspec(property(get = get_valid)) bool valid;

  /// @brief Method GetBackBuffer, addr 0x639cbe4, size 0x28, virtual false, abstract: false, final false
  inline void* GetBackBuffer(int32_t deviceIndex);

  /// @brief Method GetFrontBuffer, addr 0x639cb50, size 0x24, virtual false, abstract: false, final false
  inline void* GetFrontBuffer(int32_t deviceIndex);

  /// @brief Method SetBackBuffer, addr 0x639ce5c, size 0x20, virtual false, abstract: false, final false
  inline void SetBackBuffer(int32_t deviceIndex, void* ptr);

  /// @brief Method SetFrontBuffer, addr 0x639ce40, size 0x1c, virtual false, abstract: false, final false
  inline void SetFrontBuffer(int32_t deviceIndex, void* ptr);

  /// @brief Method SwapBuffers, addr 0x639d518, size 0x34, virtual false, abstract: false, final false
  inline void SwapBuffers(int32_t deviceIndex);

  /// @brief Method get_valid, addr 0x639d508, size 0x10, virtual false, abstract: false, final false
  inline bool get_valid();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputStateBuffers_DoubleBuffers();

  // Ctor Parameters [CppParam { name: "deviceToBufferMapping", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "deviceCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputStateBuffers_DoubleBuffers(void* deviceToBufferMapping, int32_t deviceCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9035 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field deviceToBufferMapping, offset: 0x0, size: 0x8, def value: None
  void* deviceToBufferMapping;

  /// @brief Field deviceCount, offset: 0x8, size: 0x4, def value: None
  int32_t deviceCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers, deviceToBufferMapping) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers, deviceCount) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies UnityEngine.InputSystem.LowLevel.InputStateBuffers::DoubleBuffers
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateBuffers
struct CORDL_TYPE InputStateBuffers {
public:
  // Declarations
  using DoubleBuffers = ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers;

  /// @brief Field s_CurrentBuffers, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_CurrentBuffers, put = setStaticF_s_CurrentBuffers)) ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers s_CurrentBuffers;

  /// @brief Field s_DefaultStateBuffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultStateBuffer, put = setStaticF_s_DefaultStateBuffer)) void* s_DefaultStateBuffer;

  /// @brief Field s_NoiseMaskBuffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_NoiseMaskBuffer, put = setStaticF_s_NoiseMaskBuffer)) void* s_NoiseMaskBuffer;

  /// @brief Field s_ResetMaskBuffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ResetMaskBuffer, put = setStaticF_s_ResetMaskBuffer)) void* s_ResetMaskBuffer;

  /// @brief Method AllocateAll, addr 0x639cc74, size 0x100, virtual false, abstract: false, final false
  inline void AllocateAll(::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> devices, int32_t deviceCount);

  /// @brief Method ComputeSizeOfSingleStateBuffer, addr 0x639cd74, size 0x6c, virtual false, abstract: false, final false
  static inline uint32_t ComputeSizeOfSingleStateBuffer(::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> devices, int32_t deviceCount);

  /// @brief Method FreeAll, addr 0x639ce7c, size 0xe4, virtual false, abstract: false, final false
  inline void FreeAll();

  /// @brief Method GetBackBufferForDevice, addr 0x639cb74, size 0x70, virtual false, abstract: false, final false
  static inline void* GetBackBufferForDevice(int32_t deviceIndex);

  /// @brief Method GetDoubleBuffersFor, addr 0x639ca18, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers GetDoubleBuffersFor(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType);

  /// @brief Method GetFrontBufferForDevice, addr 0x639cae4, size 0x6c, virtual false, abstract: false, final false
  static inline void* GetFrontBufferForDevice(int32_t deviceIndex);

  /// @brief Method MigrateAll, addr 0x639cf60, size 0x160, virtual false, abstract: false, final false
  inline void MigrateAll(::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> devices, int32_t deviceCount,
                         ::UnityEngine::InputSystem::LowLevel::InputStateBuffers oldBuffers);

  /// @brief Method MigrateDoubleBuffer, addr 0x639d0c0, size 0x224, virtual false, abstract: false, final false
  static inline void MigrateDoubleBuffer(::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers newBuffer,
                                         ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> devices, int32_t deviceCount,
                                         ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers oldBuffer);

  /// @brief Method MigrateSingleBuffer, addr 0x639d2e4, size 0x134, virtual false, abstract: false, final false
  static inline void MigrateSingleBuffer(void* newBuffer, ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> devices, int32_t deviceCount,
                                         void* oldBuffer);

  /// @brief Method NextDeviceOffset, addr 0x639d418, size 0xf0, virtual false, abstract: false, final false
  static inline uint32_t NextDeviceOffset(uint32_t currentOffset, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method SetUpDeviceToBufferMappings, addr 0x639cde0, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers SetUpDeviceToBufferMappings(int32_t deviceCount, ::ByRef<uint8_t*> bufferPtr, uint32_t sizePerBuffer,
                                                                                                                  uint32_t mappingTableSizePerBuffer);

  /// @brief Method SwitchTo, addr 0x639cc0c, size 0x68, virtual false, abstract: false, final false
  static inline void SwitchTo(::UnityEngine::InputSystem::LowLevel::InputStateBuffers buffers, ::UnityEngine::InputSystem::LowLevel::InputUpdateType update);

  static inline ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers getStaticF_s_CurrentBuffers();

  static inline void* getStaticF_s_DefaultStateBuffer();

  static inline void* getStaticF_s_NoiseMaskBuffer();

  static inline void* getStaticF_s_ResetMaskBuffer();

  static inline void setStaticF_s_CurrentBuffers(::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers value);

  static inline void setStaticF_s_DefaultStateBuffer(void* value);

  static inline void setStaticF_s_NoiseMaskBuffer(void* value);

  static inline void setStaticF_s_ResetMaskBuffer(void* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputStateBuffers();

  // Ctor Parameters [CppParam { name: "sizePerBuffer", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "totalSize", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "defaultStateBuffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "noiseMaskBuffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "resetMaskBuffer",
  // ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_AllBuffers", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_PlayerStateBuffers", ty:
  // "::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers", modifiers: "", def_value: None }]
  constexpr InputStateBuffers(uint32_t sizePerBuffer, uint32_t totalSize, void* defaultStateBuffer, void* noiseMaskBuffer, void* resetMaskBuffer, void* m_AllBuffers,
                              ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers m_PlayerStateBuffers) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9036 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field sizePerBuffer, offset: 0x0, size: 0x4, def value: None
  uint32_t sizePerBuffer;

  /// @brief Field totalSize, offset: 0x4, size: 0x4, def value: None
  uint32_t totalSize;

  /// @brief Field defaultStateBuffer, offset: 0x8, size: 0x8, def value: None
  void* defaultStateBuffer;

  /// @brief Field noiseMaskBuffer, offset: 0x10, size: 0x8, def value: None
  void* noiseMaskBuffer;

  /// @brief Field resetMaskBuffer, offset: 0x18, size: 0x8, def value: None
  void* resetMaskBuffer;

  /// @brief Field m_AllBuffers, offset: 0x20, size: 0x8, def value: None
  void* m_AllBuffers;

  /// @brief Field m_PlayerStateBuffers, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers m_PlayerStateBuffers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, sizePerBuffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, totalSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, defaultStateBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, noiseMaskBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, resetMaskBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, m_AllBuffers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, m_PlayerStateBuffers) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputStateBuffers, 0x38>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, "UnityEngine.InputSystem.LowLevel", "InputStateBuffers");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers, "UnityEngine.InputSystem.LowLevel", "InputStateBuffers/DoubleBuffers");
