#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaConfig)
namespace UnityEngine::Yoga {
class Logger;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class YogaConfig;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Yoga::YogaConfig);
// Type: UnityEngine.Yoga::YogaConfig
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Yoga {
// Is value type: false
// CS Name: ::UnityEngine.Yoga::YogaConfig*
class CORDL_TYPE YogaConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::UnityEngine::Yoga::YogaConfig* Default;

  __declspec(property(get = get_Handle)) void* Handle;

  __declspec(property(put = set_PointScaleFactor)) float_t PointScaleFactor;

  __declspec(property(get = get_UseWebDefaults, put = set_UseWebDefaults)) bool UseWebDefaults;

  /// @brief Field _logger, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::UnityEngine::Yoga::Logger* _logger;

  /// @brief Field _ygConfig, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ygConfig, put = __cordl_internal_set__ygConfig)) void* _ygConfig;

  /// @brief Method Finalize, addr 0x35f8dbc, size 0x108, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::UnityEngine::Yoga::YogaConfig* New_ctor();

  static inline ::UnityEngine::Yoga::YogaConfig* New_ctor(void* ygConfig);

  constexpr ::UnityEngine::Yoga::Logger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Yoga::Logger*> const& __cordl_internal_get__logger() const;

  constexpr void* const& __cordl_internal_get__ygConfig() const;

  constexpr void*& __cordl_internal_get__ygConfig();

  constexpr void __cordl_internal_set__logger(::UnityEngine::Yoga::Logger* value);

  constexpr void __cordl_internal_set__ygConfig(void* value);

  /// @brief Method .ctor, addr 0x35f8d78, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x35f8cb4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(void* ygConfig);

  static inline ::UnityEngine::Yoga::YogaConfig* getStaticF_Default();

  /// @brief Method get_Handle, addr 0x35f68f8, size 0x8, virtual false, abstract: false, final false
  inline void* get_Handle();

  /// @brief Method get_UseWebDefaults, addr 0x35f8ec4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_UseWebDefaults();

  static inline void setStaticF_Default(::UnityEngine::Yoga::YogaConfig* value);

  /// @brief Method set_PointScaleFactor, addr 0x35f8f44, size 0x4c, virtual false, abstract: false, final false
  inline void set_PointScaleFactor(float_t value);

  /// @brief Method set_UseWebDefaults, addr 0x35f8f00, size 0x44, virtual false, abstract: false, final false
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

  /// @brief Field _ygConfig, offset: 0x10, size: 0x8, def value: None
  void* ____ygConfig;

  /// @brief Field _logger, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Yoga::Logger* ____logger;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaConfig, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Yoga::YogaConfig, ____ygConfig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Yoga::YogaConfig, ____logger) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Yoga
NEED_NO_BOX(::UnityEngine::Yoga::YogaConfig);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaConfig*, "UnityEngine.Yoga", "YogaConfig");
