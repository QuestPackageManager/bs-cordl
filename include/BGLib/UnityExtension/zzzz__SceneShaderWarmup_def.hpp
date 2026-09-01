#pragma once
// IWYU pragma private; include "BGLib\UnityExtension\SceneShaderWarmup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__PassType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SceneShaderWarmup)
namespace BGLib::UnityExtension {
struct SceneShaderWarmup_LogLevel;
}
namespace BGLib::UnityExtension {
class SceneShaderWarmup__WarmupShaders_d__8;
}
namespace GlobalNamespace {
class BoolCvar;
}
namespace GlobalNamespace {
class FloatCvar;
}
namespace GlobalNamespace {
class IntCvar;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine {
class ShaderVariantCollection;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace BGLib::UnityExtension {
struct SceneShaderWarmup_LogLevel;
}
namespace BGLib::UnityExtension {
class SceneShaderWarmup;
}
namespace BGLib::UnityExtension {
class SceneShaderWarmup__WarmupShaders_d__8;
}
// Write type traits
MARK_VAL_T(::BGLib::UnityExtension::SceneShaderWarmup_LogLevel);
MARK_REF_T(::BGLib::UnityExtension::SceneShaderWarmup*);
MARK_REF_T(::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8*);
DEFINE_IL2CPP_CLASS(::BGLib::UnityExtension::SceneShaderWarmup_LogLevel, "BGLib.UnityExtension", "SceneShaderWarmup/LogLevel");
DEFINE_IL2CPP_CLASS(::BGLib::UnityExtension::SceneShaderWarmup*, "BGLib.UnityExtension", "SceneShaderWarmup");
DEFINE_IL2CPP_CLASS(::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8*, "BGLib.UnityExtension", "SceneShaderWarmup/<WarmupShaders>d__8");
// Dependencies
namespace BGLib::UnityExtension {
// Is value type: true
// CS Name: BGLib.UnityExtension.SceneShaderWarmup/LogLevel
struct CORDL_TYPE SceneShaderWarmup_LogLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SceneShaderWarmup_LogLevel_Unwrapped
  enum struct __SceneShaderWarmup_LogLevel_Unwrapped : int32_t {
    __E_Error = static_cast<int32_t>(0x0),
    __E_Summary = static_cast<int32_t>(0x1),
    __E_Info = static_cast<int32_t>(0x2),
    __E_Verbose = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SceneShaderWarmup_LogLevel_Unwrapped() const noexcept {
    return static_cast<__SceneShaderWarmup_LogLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneShaderWarmup_LogLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SceneShaderWarmup_LogLevel(int32_t value__) noexcept;

  /// @brief Field Error value: I32(0)
  static ::BGLib::UnityExtension::SceneShaderWarmup_LogLevel const Error;

  /// @brief Field Info value: I32(2)
  static ::BGLib::UnityExtension::SceneShaderWarmup_LogLevel const Info;

  /// @brief Field Summary value: I32(1)
  static ::BGLib::UnityExtension::SceneShaderWarmup_LogLevel const Summary;

  /// @brief Field Verbose value: I32(3)
  static ::BGLib::UnityExtension::SceneShaderWarmup_LogLevel const Verbose;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20798 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::UnityExtension::SceneShaderWarmup_LogLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::BGLib::UnityExtension::SceneShaderWarmup_LogLevel) == 0x4, "Size mismatch!");

} // namespace BGLib::UnityExtension
// Dependencies System.Object
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: BGLib.UnityExtension.SceneShaderWarmup/<WarmupShaders>d__8
class CORDL_TYPE SceneShaderWarmup__WarmupShaders_d__8 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <shaderVariantWarmupTime>5__2, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__shaderVariantWarmupTime_5__2,
                      put = __cordl_internal_set__shaderVariantWarmupTime_5__2)) ::System::Diagnostics::Stopwatch* _shaderVariantWarmupTime_5__2;

  /// @brief Field <shaderVariants>5__3, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__shaderVariants_5__3, put = __cordl_internal_set__shaderVariants_5__3)) ::UnityW<::UnityEngine::ShaderVariantCollection> _shaderVariants_5__3;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3329590, size 0x142c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x332a9bc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x332a9c4, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x332a9fc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x332958c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get__shaderVariantWarmupTime_5__2() const;

  constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__shaderVariantWarmupTime_5__2();

  constexpr ::UnityW<::UnityEngine::ShaderVariantCollection> const& __cordl_internal_get__shaderVariants_5__3() const;

  constexpr ::UnityW<::UnityEngine::ShaderVariantCollection>& __cordl_internal_get__shaderVariants_5__3();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set__shaderVariantWarmupTime_5__2(::System::Diagnostics::Stopwatch* value);

  constexpr void __cordl_internal_set__shaderVariants_5__3(::UnityW<::UnityEngine::ShaderVariantCollection> value);

  /// @brief Method .ctor, addr 0x33292ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneShaderWarmup__WarmupShaders_d__8();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneShaderWarmup__WarmupShaders_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneShaderWarmup__WarmupShaders_d__8(SceneShaderWarmup__WarmupShaders_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneShaderWarmup__WarmupShaders_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneShaderWarmup__WarmupShaders_d__8(SceneShaderWarmup__WarmupShaders_d__8 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20799 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <shaderVariantWarmupTime>5__2, offset: 0x20, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ____shaderVariantWarmupTime_5__2;

  /// @brief Field <shaderVariants>5__3, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ShaderVariantCollection> ____shaderVariants_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8, ____shaderVariantWarmupTime_5__2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8, ____shaderVariants_5__3) == 0x28, "Offset mismatch!");

static_assert(sizeof(::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8) == 0x30, "Size mismatch!");

} // namespace BGLib::UnityExtension
// Dependencies System.Object, UnityEngine.Rendering.PassType
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: BGLib.UnityExtension.SceneShaderWarmup
class CORDL_TYPE SceneShaderWarmup : public ::System::Object {
public:
  // Declarations
  using LogLevel = ::BGLib::UnityExtension::SceneShaderWarmup_LogLevel;

  using _WarmupShaders_d__8 = ::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8;

  /// @brief Field _enabled, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__enabled, put = setStaticF__enabled)) ::GlobalNamespace::BoolCvar* _enabled;

  /// @brief Field _logLevel, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__logLevel, put = setStaticF__logLevel)) ::GlobalNamespace::IntCvar* _logLevel;

  /// @brief Field _maxDuration, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__maxDuration, put = setStaticF__maxDuration)) ::GlobalNamespace::FloatCvar* _maxDuration;

  /// @brief Field _passTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__passTypes, put = setStaticF__passTypes)) ::ArrayW<::UnityEngine::Rendering::PassType> _passTypes;

  /// @brief Field _shaderKeywords, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__shaderKeywords,
                      put =
                          setStaticF__shaderKeywords)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Shader>, ::ArrayW<::UnityEngine::Rendering::LocalKeyword>>* _shaderKeywords;

  /// @brief Field _variantsPerStep, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__variantsPerStep, put = setStaticF__variantsPerStep)) ::GlobalNamespace::IntCvar* _variantsPerStep;

  /// @brief Method Initialize, addr 0x332919c, size 0xc4, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method Log, addr 0x33292b4, size 0x8c, virtual false, abstract: false, final false
  static inline void Log(::StringW message);

  /// @brief Method WarmupShaders, addr 0x3329260, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerator* WarmupShaders();

  static inline ::GlobalNamespace::BoolCvar* getStaticF__enabled();

  static inline ::GlobalNamespace::IntCvar* getStaticF__logLevel();

  static inline ::GlobalNamespace::FloatCvar* getStaticF__maxDuration();

  static inline ::ArrayW<::UnityEngine::Rendering::PassType> getStaticF__passTypes();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Shader>, ::ArrayW<::UnityEngine::Rendering::LocalKeyword>>* getStaticF__shaderKeywords();

  static inline ::GlobalNamespace::IntCvar* getStaticF__variantsPerStep();

  static inline void setStaticF__enabled(::GlobalNamespace::BoolCvar* value);

  static inline void setStaticF__logLevel(::GlobalNamespace::IntCvar* value);

  static inline void setStaticF__maxDuration(::GlobalNamespace::FloatCvar* value);

  static inline void setStaticF__passTypes(::ArrayW<::UnityEngine::Rendering::PassType> value);

  static inline void setStaticF__shaderKeywords(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Shader>, ::ArrayW<::UnityEngine::Rendering::LocalKeyword>>* value);

  static inline void setStaticF__variantsPerStep(::GlobalNamespace::IntCvar* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneShaderWarmup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneShaderWarmup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneShaderWarmup(SceneShaderWarmup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneShaderWarmup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneShaderWarmup(SceneShaderWarmup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20800 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BGLib::UnityExtension::SceneShaderWarmup) == 0x10, "Size mismatch!");

} // namespace BGLib::UnityExtension
