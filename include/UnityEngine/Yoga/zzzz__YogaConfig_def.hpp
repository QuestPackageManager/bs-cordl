#pragma once
// IWYU pragma private; include "UnityEngine/Yoga/YogaConfig.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(YogaConfig)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Yoga {
class Logger;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class YogaConfig;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Yoga::YogaConfig);
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Yoga {
// Is value type: false
// CS Name: UnityEngine.Yoga.YogaConfig
class CORDL_TYPE YogaConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::UnityEngine::Yoga::YogaConfig* Default;

  __declspec(property(get = get_Handle)) ::System::IntPtr Handle;

  __declspec(property(put = set_PointScaleFactor)) float_t PointScaleFactor;

  __declspec(property(get = get_UseWebDefaults, put = set_UseWebDefaults)) bool UseWebDefaults;

  /// @brief Field _logger, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger)) ::UnityEngine::Yoga::Logger* _logger;

  /// @brief Field _ygConfig, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ygConfig, put = __cordl_internal_set__ygConfig)) ::System::IntPtr _ygConfig;

  /// @brief Method Finalize, addr 0x496c460, size 0x108, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::UnityEngine::Yoga::YogaConfig* New_ctor();

  static inline ::UnityEngine::Yoga::YogaConfig* New_ctor(::System::IntPtr ygConfig);

  constexpr ::UnityEngine::Yoga::Logger* const& __cordl_internal_get__logger() const;

  constexpr ::UnityEngine::Yoga::Logger*& __cordl_internal_get__logger();

  constexpr ::System::IntPtr const& __cordl_internal_get__ygConfig() const;

  constexpr ::System::IntPtr& __cordl_internal_get__ygConfig();

  constexpr void __cordl_internal_set__logger(::UnityEngine::Yoga::Logger* value);

  constexpr void __cordl_internal_set__ygConfig(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x496c3f4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x496c370, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ygConfig);

  static inline ::UnityEngine::Yoga::YogaConfig* getStaticF_Default();

  /// @brief Method get_Handle, addr 0x496c568, size 0x8, virtual false, abstract: false, final false
  inline ::System::IntPtr get_Handle();

  /// @brief Method get_UseWebDefaults, addr 0x496c5c8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_UseWebDefaults();

  static inline void setStaticF_Default(::UnityEngine::Yoga::YogaConfig* value);

  /// @brief Method set_PointScaleFactor, addr 0x496c6c8, size 0x4c, virtual false, abstract: false, final false
  inline void set_PointScaleFactor(float_t value);

  /// @brief Method set_UseWebDefaults, addr 0x496c640, size 0x44, virtual false, abstract: false, final false
  inline void set_UseWebDefaults(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr YogaConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "YogaConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  YogaConfig(YogaConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "YogaConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  YogaConfig(YogaConfig const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5431 };

  /// @brief Field _ygConfig, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ____ygConfig;

  /// @brief Field _logger, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Yoga::Logger* ____logger;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Yoga::YogaConfig, ____ygConfig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Yoga::YogaConfig, ____logger) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaConfig, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Yoga
NEED_NO_BOX(::UnityEngine::Yoga::YogaConfig);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaConfig*, "UnityEngine.Yoga", "YogaConfig");
