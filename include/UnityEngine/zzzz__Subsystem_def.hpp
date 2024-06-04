#pragma once
// IWYU pragma private; include "UnityEngine/Subsystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Subsystem)
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine {
class Subsystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Subsystem);
// Type: UnityEngine::Subsystem
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Subsystem*
class CORDL_TYPE Subsystem : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::ISubsystem"
  constexpr operator ::UnityEngine::ISubsystem*() noexcept;

  /// @brief Method Destroy, addr 0x349aa54, size 0x74, virtual true, abstract: false, final true
  inline void Destroy();

  static inline ::UnityEngine::Subsystem* New_ctor();

  /// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Start();

  /// @brief Method Stop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Stop();

  /// @brief Method .ctor, addr 0x349aac8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::ISubsystem"
  constexpr ::UnityEngine::ISubsystem* i___UnityEngine__ISubsystem() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Subsystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Subsystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Subsystem(Subsystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Subsystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Subsystem(Subsystem const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Subsystem, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Subsystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Subsystem*, "UnityEngine", "Subsystem");
