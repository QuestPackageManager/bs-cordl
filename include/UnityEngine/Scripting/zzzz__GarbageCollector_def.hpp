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
struct __GarbageCollector__Mode;
}
// Forward declare root types
namespace UnityEngine::Scripting {
struct __GarbageCollector__Mode;
}
namespace UnityEngine::Scripting {
class GarbageCollector;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Scripting::__GarbageCollector__Mode);
MARK_REF_PTR_T(::UnityEngine::Scripting::GarbageCollector);
// Type: ::Mode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Scripting {
// Is value type: true
// CS Name: ::GarbageCollector::Mode
struct CORDL_TYPE __GarbageCollector__Mode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GarbageCollector__Mode_Unwrapped
  enum struct ____GarbageCollector__Mode_Unwrapped : int32_t {
    __E_Disabled = static_cast<int32_t>(0x0),
    __E_Enabled = static_cast<int32_t>(0x1),
    __E_Manual = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GarbageCollector__Mode_Unwrapped() const noexcept {
    return static_cast<____GarbageCollector__Mode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GarbageCollector__Mode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GarbageCollector__Mode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Disabled value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Scripting::__GarbageCollector__Mode const Disabled;

  /// @brief Field Enabled value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Scripting::__GarbageCollector__Mode const Enabled;

  /// @brief Field Manual value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Scripting::__GarbageCollector__Mode const Manual;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10959 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Scripting::__GarbageCollector__Mode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Scripting::__GarbageCollector__Mode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Scripting
// Type: UnityEngine.Scripting::GarbageCollector
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Scripting {
// Is value type: false
// CS Name: ::UnityEngine.Scripting::GarbageCollector*
class CORDL_TYPE GarbageCollector : public ::System::Object {
public:
  // Declarations
  using Mode = ::UnityEngine::Scripting::__GarbageCollector__Mode;

  /// @brief Field GCModeChanged, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GCModeChanged, put = setStaticF_GCModeChanged)) ::System::Action_1<::UnityEngine::Scripting::__GarbageCollector__Mode>* GCModeChanged;

  /// @brief Method GetMode, addr 0x4847f3c, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Scripting::__GarbageCollector__Mode GetMode();

  /// @brief Method SetMode, addr 0x4847f64, size 0x3c, virtual false, abstract: false, final false
  static inline void SetMode(::UnityEngine::Scripting::__GarbageCollector__Mode mode);

  static inline ::System::Action_1<::UnityEngine::Scripting::__GarbageCollector__Mode>* getStaticF_GCModeChanged();

  static inline void setStaticF_GCModeChanged(::System::Action_1<::UnityEngine::Scripting::__GarbageCollector__Mode>* value);

  /// @brief Method set_GCMode, addr 0x4847e7c, size 0xc0, virtual false, abstract: false, final false
  static inline void set_GCMode(::UnityEngine::Scripting::__GarbageCollector__Mode value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10960 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Scripting::GarbageCollector, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Scripting
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::__GarbageCollector__Mode, "UnityEngine.Scripting", "GarbageCollector/Mode");
NEED_NO_BOX(::UnityEngine::Scripting::GarbageCollector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::GarbageCollector*, "UnityEngine.Scripting", "GarbageCollector");
