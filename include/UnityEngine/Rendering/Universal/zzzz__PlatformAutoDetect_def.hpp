#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PlatformAutoDetect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlatformAutoDetect)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Lazy_1;
}
namespace UnityEngine::Rendering::Universal {
class PlatformAutoDetect_PlatformDetectionCache;
}
namespace UnityEngine::Rendering::Universal {
class PlatformAutoDetect___c;
}
namespace UnityEngine::Rendering::Universal {
struct ShEvalMode;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class PlatformAutoDetect;
}
namespace UnityEngine::Rendering::Universal {
class PlatformAutoDetect_PlatformDetectionCache;
}
namespace UnityEngine::Rendering::Universal {
class PlatformAutoDetect___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::PlatformAutoDetect*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PlatformAutoDetect___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PlatformAutoDetect*, "UnityEngine.Rendering.Universal", "PlatformAutoDetect");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache*, "UnityEngine.Rendering.Universal", "PlatformAutoDetect/PlatformDetectionCache");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PlatformAutoDetect___c*, "UnityEngine.Rendering.Universal", "PlatformAutoDetect/<>c");
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PlatformAutoDetect/PlatformDetectionCache
class CORDL_TYPE PlatformAutoDetect_PlatformDetectionCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field isRunningOnPowerVRGPU, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_isRunningOnPowerVRGPU, put = __cordl_internal_set_isRunningOnPowerVRGPU)) bool isRunningOnPowerVRGPU;

  /// @brief Field isShaderAPIMobileDefined, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_isShaderAPIMobileDefined, put = __cordl_internal_set_isShaderAPIMobileDefined)) bool isShaderAPIMobileDefined;

  /// @brief Field isSwitch, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_isSwitch, put = __cordl_internal_set_isSwitch)) bool isSwitch;

  /// @brief Field isSwitch2, offset 0x13, size 0x1
  __declspec(property(get = __cordl_internal_get_isSwitch2, put = __cordl_internal_set_isSwitch2)) bool isSwitch2;

  /// @brief Field isXRMobile, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_isXRMobile, put = __cordl_internal_set_isXRMobile)) bool isXRMobile;

  static inline ::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache* New_ctor();

  constexpr bool const& __cordl_internal_get_isRunningOnPowerVRGPU() const;

  constexpr bool& __cordl_internal_get_isRunningOnPowerVRGPU();

  constexpr bool const& __cordl_internal_get_isShaderAPIMobileDefined() const;

  constexpr bool& __cordl_internal_get_isShaderAPIMobileDefined();

  constexpr bool const& __cordl_internal_get_isSwitch() const;

  constexpr bool& __cordl_internal_get_isSwitch();

  constexpr bool const& __cordl_internal_get_isSwitch2() const;

  constexpr bool& __cordl_internal_get_isSwitch2();

  constexpr bool const& __cordl_internal_get_isXRMobile() const;

  constexpr bool& __cordl_internal_get_isXRMobile();

  constexpr void __cordl_internal_set_isRunningOnPowerVRGPU(bool value);

  constexpr void __cordl_internal_set_isShaderAPIMobileDefined(bool value);

  constexpr void __cordl_internal_set_isSwitch(bool value);

  constexpr void __cordl_internal_set_isSwitch2(bool value);

  constexpr void __cordl_internal_set_isXRMobile(bool value);

  /// @brief Method .ctor, addr 0x6d10d74, size 0x168, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformAutoDetect_PlatformDetectionCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformAutoDetect_PlatformDetectionCache", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformAutoDetect_PlatformDetectionCache(PlatformAutoDetect_PlatformDetectionCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformAutoDetect_PlatformDetectionCache", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformAutoDetect_PlatformDetectionCache(PlatformAutoDetect_PlatformDetectionCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13270 };

  /// @brief Field isXRMobile, offset: 0x10, size: 0x1, def value: None
  bool ___isXRMobile;

  /// @brief Field isShaderAPIMobileDefined, offset: 0x11, size: 0x1, def value: None
  bool ___isShaderAPIMobileDefined;

  /// @brief Field isSwitch, offset: 0x12, size: 0x1, def value: None
  bool ___isSwitch;

  /// @brief Field isSwitch2, offset: 0x13, size: 0x1, def value: None
  bool ___isSwitch2;

  /// @brief Field isRunningOnPowerVRGPU, offset: 0x14, size: 0x1, def value: None
  bool ___isRunningOnPowerVRGPU;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache, ___isXRMobile) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache, ___isShaderAPIMobileDefined) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache, ___isSwitch) == 0x12, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache, ___isSwitch2) == 0x13, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache, ___isRunningOnPowerVRGPU) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PlatformAutoDetect/<>c
class CORDL_TYPE PlatformAutoDetect___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::PlatformAutoDetect___c* __9;

  static inline ::UnityEngine::Rendering::Universal::PlatformAutoDetect___c* New_ctor();

  /// @brief Method <.cctor>b__16_0, addr 0x6d10f34, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache* __cctor_b__16_0();

  /// @brief Method .ctor, addr 0x6d10f30, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::PlatformAutoDetect___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::PlatformAutoDetect___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformAutoDetect___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformAutoDetect___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformAutoDetect___c(PlatformAutoDetect___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformAutoDetect___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformAutoDetect___c(PlatformAutoDetect___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13271 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::PlatformAutoDetect___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PlatformAutoDetect
class CORDL_TYPE PlatformAutoDetect : public ::System::Object {
public:
  // Declarations
  using PlatformDetectionCache = ::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache;

  using __c = ::UnityEngine::Rendering::Universal::PlatformAutoDetect___c;

  /// @brief Field displaySubsystemList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_displaySubsystemList, put = setStaticF_displaySubsystemList)) ::System::Collections::Generic::List_1<Il2CppObject*>* displaySubsystemList;

  /// @brief Field platformCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_platformCache, put = setStaticF_platformCache)) ::System::Lazy_1<::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache*>* platformCache;

  /// @brief Method Initialize, addr 0x6d105ac, size 0xa4, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method IsRunningXRMobile, addr 0x6d10650, size 0x1a4, virtual false, abstract: false, final false
  static inline bool IsRunningXRMobile();

  /// @brief Method ShAutoDetect, addr 0x6d10b50, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::ShEvalMode ShAutoDetect(::UnityEngine::Rendering::Universal::ShEvalMode mode);

  static inline ::System::Collections::Generic::List_1<Il2CppObject*>* getStaticF_displaySubsystemList();

  static inline ::System::Lazy_1<::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache*>* getStaticF_platformCache();

  /// @brief Method get_isRunningOnPowerVRGPU, addr 0x6d10aa4, size 0xac, virtual false, abstract: false, final false
  static inline bool get_isRunningOnPowerVRGPU();

  /// @brief Method get_isShaderAPIMobileDefined, addr 0x6d108a0, size 0xac, virtual false, abstract: false, final false
  static inline bool get_isShaderAPIMobileDefined();

  /// @brief Method get_isSwitch, addr 0x6d1094c, size 0xac, virtual false, abstract: false, final false
  static inline bool get_isSwitch();

  /// @brief Method get_isSwitch2, addr 0x6d109f8, size 0xac, virtual false, abstract: false, final false
  static inline bool get_isSwitch2();

  /// @brief Method get_isXRMobile, addr 0x6d107f4, size 0xac, virtual false, abstract: false, final false
  static inline bool get_isXRMobile();

  static inline void setStaticF_displaySubsystemList(::System::Collections::Generic::List_1<Il2CppObject*>* value);

  static inline void setStaticF_platformCache(::System::Lazy_1<::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformAutoDetect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformAutoDetect", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformAutoDetect(PlatformAutoDetect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformAutoDetect", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformAutoDetect(PlatformAutoDetect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13272 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::PlatformAutoDetect) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
