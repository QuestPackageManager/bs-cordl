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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2601))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15392))
// CS Name: ::UnityEngine.Yoga::YogaConfig*
class CORDL_TYPE YogaConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field _ygConfig, offset 0x10, size 0x8
  __declspec(property(get = __get__ygConfig, put = __set__ygConfig)) void* _ygConfig;

  /// @brief Field _logger, offset 0x18, size 0x8
  __declspec(property(get = __get__logger, put = __set__logger))::UnityEngine::Yoga::Logger* _logger;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::UnityEngine::Yoga::YogaConfig* Default;

  __declspec(property(get = get_Handle)) void* Handle;

  __declspec(property(get = get_UseWebDefaults, put = set_UseWebDefaults)) bool UseWebDefaults;

  __declspec(property(put = set_PointScaleFactor)) float_t PointScaleFactor;

  constexpr void*& __get__ygConfig();

  constexpr void* const& __get__ygConfig() const;

  constexpr void __set__ygConfig(void* value);

  constexpr ::UnityEngine::Yoga::Logger*& __get__logger();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Yoga::Logger*> const& __get__logger() const;

  constexpr void __set__logger(::UnityEngine::Yoga::Logger* value);

  static inline void setStaticF_Default(::UnityEngine::Yoga::YogaConfig* value);

  static inline ::UnityEngine::Yoga::YogaConfig* getStaticF_Default();

  static inline ::UnityEngine::Yoga::YogaConfig* New_ctor(void* ygConfig);

  /// @brief Method .ctor addr 0x2d3ca68 size 0xc4 virtual false final false
  inline void _ctor(void* ygConfig);

  static inline ::UnityEngine::Yoga::YogaConfig* New_ctor();

  /// @brief Method .ctor addr 0x2d3cb2c size 0x44 virtual false final false
  inline void _ctor();

  /// @brief Method Finalize addr 0x2d3cb70 size 0x108 virtual true final false
  inline void Finalize();

  /// @brief Method get_Handle addr 0x2d3a6ac size 0x8 virtual false final false
  inline void* get_Handle();

  /// @brief Method get_UseWebDefaults addr 0x2d3cc78 size 0x3c virtual false final false
  inline bool get_UseWebDefaults();

  /// @brief Method set_UseWebDefaults addr 0x2d3ccb4 size 0x44 virtual false final false
  inline void set_UseWebDefaults(bool value);

  /// @brief Method set_PointScaleFactor addr 0x2d3ccf8 size 0x4c virtual false final false
  inline void set_PointScaleFactor(float_t value);

  // Ctor Parameters [CppParam { name: "", ty: "YogaConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  YogaConfig(YogaConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "YogaConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  YogaConfig(YogaConfig const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr YogaConfig();

public:
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
