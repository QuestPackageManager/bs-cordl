#pragma once
// IWYU pragma private; include "UnityEngine/Scripting/GarbageCollector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GarbageCollector)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::Scripting {
struct GarbageCollector_Mode;
}
// Forward declare root types
namespace UnityEngine::Scripting {
struct GarbageCollector_Mode;
}
namespace UnityEngine::Scripting {
class GarbageCollector;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Scripting::GarbageCollector_Mode);
MARK_REF_PTR_T(::UnityEngine::Scripting::GarbageCollector);
// Dependencies
namespace UnityEngine::Scripting {
// Is value type: true
// CS Name: UnityEngine.Scripting.GarbageCollector/Mode
struct CORDL_TYPE GarbageCollector_Mode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GarbageCollector_Mode_Unwrapped
  enum struct __GarbageCollector_Mode_Unwrapped : int32_t {
    __E_Disabled = static_cast<int32_t>(0x0),
    __E_Enabled = static_cast<int32_t>(0x1),
    __E_Manual = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GarbageCollector_Mode_Unwrapped() const noexcept {
    return static_cast<__GarbageCollector_Mode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GarbageCollector_Mode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GarbageCollector_Mode(int32_t value__) noexcept;

  /// @brief Field Disabled value: I32(0)
  static ::UnityEngine::Scripting::GarbageCollector_Mode const Disabled;

  /// @brief Field Enabled value: I32(1)
  static ::UnityEngine::Scripting::GarbageCollector_Mode const Enabled;

  /// @brief Field Manual value: I32(2)
  static ::UnityEngine::Scripting::GarbageCollector_Mode const Manual;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11002 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Scripting::GarbageCollector_Mode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Scripting::GarbageCollector_Mode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Scripting
// Dependencies System.Object
namespace UnityEngine::Scripting {
// Is value type: false
// CS Name: UnityEngine.Scripting.GarbageCollector
class CORDL_TYPE GarbageCollector : public ::System::Object {
public:
  // Declarations
  using Mode = ::UnityEngine::Scripting::GarbageCollector_Mode;

  /// @brief Field GCModeChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_GCModeChanged, put = setStaticF_GCModeChanged)) ::System::Action_1<::UnityEngine::Scripting::GarbageCollector_Mode>* GCModeChanged;

  /// @brief Method GetMode, addr 0x48c0118, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Scripting::GarbageCollector_Mode GetMode();

  /// @brief Method SetMode, addr 0x48c0140, size 0x3c, virtual false, abstract: false, final false
  static inline void SetMode(::UnityEngine::Scripting::GarbageCollector_Mode mode);

  static inline ::System::Action_1<::UnityEngine::Scripting::GarbageCollector_Mode>* getStaticF_GCModeChanged();

  static inline void setStaticF_GCModeChanged(::System::Action_1<::UnityEngine::Scripting::GarbageCollector_Mode>* value);

  /// @brief Method set_GCMode, addr 0x48c0058, size 0xc0, virtual false, abstract: false, final false
  static inline void set_GCMode(::UnityEngine::Scripting::GarbageCollector_Mode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GarbageCollector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GarbageCollector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GarbageCollector(GarbageCollector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GarbageCollector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GarbageCollector(GarbageCollector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11003 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Scripting::GarbageCollector, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Scripting
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::GarbageCollector_Mode, "UnityEngine.Scripting", "GarbageCollector/Mode");
NEED_NO_BOX(::UnityEngine::Scripting::GarbageCollector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::GarbageCollector*, "UnityEngine.Scripting", "GarbageCollector");
