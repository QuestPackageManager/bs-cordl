#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/GlobalIllumination/Lightmapping.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Lightmapping)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightDataGI;
}
namespace UnityEngine::Experimental::GlobalIllumination {
class Lightmapping_RequestLightsDelegate;
}
namespace UnityEngine::Experimental::GlobalIllumination {
class Lightmapping___c;
}
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
class Lightmapping;
}
namespace UnityEngine::Experimental::GlobalIllumination {
class Lightmapping_RequestLightsDelegate;
}
namespace UnityEngine::Experimental::GlobalIllumination {
class Lightmapping___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::GlobalIllumination::Lightmapping);
MARK_REF_PTR_T(::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate);
MARK_REF_PTR_T(::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: false
// CS Name: UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate
class CORDL_TYPE Lightmapping_RequestLightsDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x48d0814, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ArrayW<::UnityEngine::Light*, ::Array<::UnityEngine::Light*>*> requests,
                     ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput);

  static inline ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x48d0774, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Lightmapping_RequestLightsDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Lightmapping_RequestLightsDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Lightmapping_RequestLightsDelegate(Lightmapping_RequestLightsDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Lightmapping_RequestLightsDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Lightmapping_RequestLightsDelegate(Lightmapping_RequestLightsDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11308 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Experimental::GlobalIllumination
// Dependencies System.Object
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: false
// CS Name: UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
class CORDL_TYPE Lightmapping___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c* __9;

  static inline ::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c* New_ctor();

  /// @brief Method <.cctor>b__7_0, addr 0x48d088c, size 0x4bc, virtual false, abstract: false, final false
  inline void __cctor_b__7_0(::ArrayW<::UnityEngine::Light*, ::Array<::UnityEngine::Light*>*> requests,
                             ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput);

  /// @brief Method .ctor, addr 0x48d0884, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Lightmapping___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Lightmapping___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Lightmapping___c(Lightmapping___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Lightmapping___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Lightmapping___c(Lightmapping___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11309 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::GlobalIllumination
// Dependencies System.Object
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: false
// CS Name: UnityEngine.Experimental.GlobalIllumination.Lightmapping
class CORDL_TYPE Lightmapping : public ::System::Object {
public:
  // Declarations
  using RequestLightsDelegate = ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate;

  using __c = ::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c;

  /// @brief Field s_DefaultDelegate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultDelegate, put = setStaticF_s_DefaultDelegate)) ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* s_DefaultDelegate;

  /// @brief Field s_RequestLightsDelegate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_RequestLightsDelegate,
                      put = setStaticF_s_RequestLightsDelegate)) ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* s_RequestLightsDelegate;

  /// @brief Method GetDelegate, addr 0x48d0524, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* GetDelegate();

  /// @brief Method RequestLights, addr 0x48d05d8, size 0xcc, virtual false, abstract: false, final false
  static inline void RequestLights(::ArrayW<::UnityEngine::Light*, ::Array<::UnityEngine::Light*>*> lights, ::System::IntPtr outLightsPtr, int32_t outLightsCount);

  /// @brief Method ResetDelegate, addr 0x48d057c, size 0x5c, virtual false, abstract: false, final false
  static inline void ResetDelegate();

  /// @brief Method SetDelegate, addr 0x48d04ac, size 0x78, virtual false, abstract: false, final false
  static inline void SetDelegate(::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* del);

  static inline ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* getStaticF_s_DefaultDelegate();

  static inline ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* getStaticF_s_RequestLightsDelegate();

  static inline void setStaticF_s_DefaultDelegate(::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* value);

  static inline void setStaticF_s_RequestLightsDelegate(::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Lightmapping();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Lightmapping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Lightmapping(Lightmapping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Lightmapping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Lightmapping(Lightmapping const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11310 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::Lightmapping, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::GlobalIllumination
NEED_NO_BOX(::UnityEngine::Experimental::GlobalIllumination::Lightmapping);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::Lightmapping*, "UnityEngine.Experimental.GlobalIllumination", "Lightmapping");
NEED_NO_BOX(::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*, "UnityEngine.Experimental.GlobalIllumination", "Lightmapping/RequestLightsDelegate");
NEED_NO_BOX(::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c*, "UnityEngine.Experimental.GlobalIllumination", "Lightmapping/<>c");
