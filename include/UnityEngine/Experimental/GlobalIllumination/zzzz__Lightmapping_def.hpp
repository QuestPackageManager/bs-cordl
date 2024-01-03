#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Lightmapping)
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
class __Lightmapping__RequestLightsDelegate;
}
namespace UnityEngine::Experimental::GlobalIllumination {
class __Lightmapping____c;
}
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
class Lightmapping;
}
namespace UnityEngine::Experimental::GlobalIllumination {
class __Lightmapping__RequestLightsDelegate;
}
namespace UnityEngine::Experimental::GlobalIllumination {
class __Lightmapping____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::GlobalIllumination::Lightmapping);
MARK_REF_PTR_T(::UnityEngine::Experimental::GlobalIllumination::__Lightmapping__RequestLightsDelegate);
MARK_REF_PTR_T(::UnityEngine::Experimental::GlobalIllumination::__Lightmapping____c);
// Type: ::RequestLightsDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10399))
// CS Name: ::Lightmapping::RequestLightsDelegate*
class CORDL_TYPE __Lightmapping__RequestLightsDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::Experimental::GlobalIllumination::__Lightmapping__RequestLightsDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2cf34fc, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2cf35d4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ArrayW<::UnityEngine::Light*, ::Array<::UnityEngine::Light*>*> requests,
                     ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput);

  // Ctor Parameters [CppParam { name: "", ty: "__Lightmapping__RequestLightsDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Lightmapping__RequestLightsDelegate(__Lightmapping__RequestLightsDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Lightmapping__RequestLightsDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Lightmapping__RequestLightsDelegate(__Lightmapping__RequestLightsDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Lightmapping__RequestLightsDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::__Lightmapping__RequestLightsDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Experimental::GlobalIllumination
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10400))
// CS Name: ::Lightmapping::<>c*
class CORDL_TYPE __Lightmapping____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Experimental::GlobalIllumination::__Lightmapping____c* __9;

  static inline void setStaticF___9(::UnityEngine::Experimental::GlobalIllumination::__Lightmapping____c* value);

  static inline ::UnityEngine::Experimental::GlobalIllumination::__Lightmapping____c* getStaticF___9();

  static inline ::UnityEngine::Experimental::GlobalIllumination::__Lightmapping____c* New_ctor();

  /// @brief Method .ctor, addr 0x2cf364c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <.cctor>b__7_0, addr 0x2cf3654, size 0x4c0, virtual false, abstract: false, final false
  inline void __cctor_b__7_0(::ArrayW<::UnityEngine::Light*, ::Array<::UnityEngine::Light*>*> requests,
                             ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput);

  // Ctor Parameters [CppParam { name: "", ty: "__Lightmapping____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Lightmapping____c(__Lightmapping____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Lightmapping____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Lightmapping____c(__Lightmapping____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Lightmapping____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::__Lightmapping____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::GlobalIllumination
// Type: UnityEngine.Experimental.GlobalIllumination::Lightmapping
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10401))
// CS Name: ::UnityEngine.Experimental.GlobalIllumination::Lightmapping*
class CORDL_TYPE Lightmapping : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Experimental::GlobalIllumination::__Lightmapping____c;

  using RequestLightsDelegate = ::UnityEngine::Experimental::GlobalIllumination::__Lightmapping__RequestLightsDelegate;

  /// @brief Field s_DefaultDelegate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultDelegate,
                             put = setStaticF_s_DefaultDelegate))::UnityEngine::Experimental::GlobalIllumination::__Lightmapping__RequestLightsDelegate* s_DefaultDelegate;

  /// @brief Field s_RequestLightsDelegate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_RequestLightsDelegate,
                             put = setStaticF_s_RequestLightsDelegate))::UnityEngine::Experimental::GlobalIllumination::__Lightmapping__RequestLightsDelegate* s_RequestLightsDelegate;

  static inline void setStaticF_s_DefaultDelegate(::UnityEngine::Experimental::GlobalIllumination::__Lightmapping__RequestLightsDelegate* value);

  static inline ::UnityEngine::Experimental::GlobalIllumination::__Lightmapping__RequestLightsDelegate* getStaticF_s_DefaultDelegate();

  static inline void setStaticF_s_RequestLightsDelegate(::UnityEngine::Experimental::GlobalIllumination::__Lightmapping__RequestLightsDelegate* value);

  static inline ::UnityEngine::Experimental::GlobalIllumination::__Lightmapping__RequestLightsDelegate* getStaticF_s_RequestLightsDelegate();

  /// @brief Method SetDelegate, addr 0x2cf3234, size 0x78, virtual false, abstract: false, final false
  static inline void SetDelegate(::UnityEngine::Experimental::GlobalIllumination::__Lightmapping__RequestLightsDelegate* del);

  /// @brief Method GetDelegate, addr 0x2cf32ac, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::GlobalIllumination::__Lightmapping__RequestLightsDelegate* GetDelegate();

  /// @brief Method ResetDelegate, addr 0x2cf3304, size 0x5c, virtual false, abstract: false, final false
  static inline void ResetDelegate();

  /// @brief Method RequestLights, addr 0x2cf3360, size 0xcc, virtual false, abstract: false, final false
  static inline void RequestLights(::ArrayW<::UnityEngine::Light*, ::Array<::UnityEngine::Light*>*> lights, void* outLightsPtr, int32_t outLightsCount);

  // Ctor Parameters [CppParam { name: "", ty: "Lightmapping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Lightmapping(Lightmapping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Lightmapping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Lightmapping(Lightmapping const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Lightmapping();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::Lightmapping, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::GlobalIllumination
NEED_NO_BOX(::UnityEngine::Experimental::GlobalIllumination::Lightmapping);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::Lightmapping*, "UnityEngine.Experimental.GlobalIllumination", "Lightmapping");
NEED_NO_BOX(::UnityEngine::Experimental::GlobalIllumination::__Lightmapping__RequestLightsDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::__Lightmapping__RequestLightsDelegate*, "UnityEngine.Experimental.GlobalIllumination", "Lightmapping/RequestLightsDelegate");
NEED_NO_BOX(::UnityEngine::Experimental::GlobalIllumination::__Lightmapping____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::__Lightmapping____c*, "UnityEngine.Experimental.GlobalIllumination", "Lightmapping/<>c");
