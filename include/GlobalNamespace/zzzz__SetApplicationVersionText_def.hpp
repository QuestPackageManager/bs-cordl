#pragma once
// IWYU pragma private; include "GlobalNamespace/SetApplicationVersionText.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SetApplicationVersionText)
namespace BeatSaber::Init {
class GameVersionProvider;
}
namespace BeatSaber::Init {
class GameVersion;
}
namespace GlobalNamespace {
struct __SetApplicationVersionText___Start_d__8;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class SpriteRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class SetApplicationVersionText;
}
namespace GlobalNamespace {
struct __SetApplicationVersionText___Start_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SetApplicationVersionText);
MARK_VAL_T(::GlobalNamespace::__SetApplicationVersionText___Start_d__8);
// Type: ::<Start>d__8
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SetApplicationVersionText::<Start>d__8
struct CORDL_TYPE __SetApplicationVersionText___Start_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3b44b8c, size 0x2d4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3b44e60, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SetApplicationVersionText___Start_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SetApplicationVersionText>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Init::GameVersion*>", modifiers: "", def_value: None }]
  constexpr __SetApplicationVersionText___Start_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                     ::UnityW<::GlobalNamespace::SetApplicationVersionText> __4__this,
                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Init::GameVersion*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SetApplicationVersionText> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Init::GameVersion*> __u__1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4407 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SetApplicationVersionText___Start_d__8, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SetApplicationVersionText___Start_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SetApplicationVersionText___Start_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SetApplicationVersionText___Start_d__8, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SetApplicationVersionText___Start_d__8, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SetApplicationVersionText
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SetApplicationVersionText*
class CORDL_TYPE SetApplicationVersionText : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__8 = ::GlobalNamespace::__SetApplicationVersionText___Start_d__8;

  /// @brief Field _buildIdText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__buildIdText, put = __cordl_internal_set__buildIdText)) ::UnityW<::TMPro::TextMeshPro> _buildIdText;

  /// @brief Field _footSprite, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__footSprite, put = __cordl_internal_set__footSprite)) ::UnityW<::UnityEngine::SpriteRenderer> _footSprite;

  /// @brief Field _gameVersionProvider, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__gameVersionProvider, put = __cordl_internal_set__gameVersionProvider)) ::BeatSaber::Init::GameVersionProvider* _gameVersionProvider;

  /// @brief Field _labelText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__labelText, put = __cordl_internal_set__labelText)) ::UnityW<::TMPro::TextMeshPro> _labelText;

  /// @brief Field _nonRCBuildColor, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__nonRCBuildColor, put = __cordl_internal_set__nonRCBuildColor)) ::UnityEngine::Color _nonRCBuildColor;

  /// @brief Field _platformIdText, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__platformIdText, put = __cordl_internal_set__platformIdText)) ::UnityW<::TMPro::TextMeshPro> _platformIdText;

  /// @brief Field _rcBuildColor, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__rcBuildColor, put = __cordl_internal_set__rcBuildColor)) ::UnityEngine::Color _rcBuildColor;

  /// @brief Field _versionText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__versionText, put = __cordl_internal_set__versionText)) ::UnityW<::TMPro::TextMeshPro> _versionText;

  static inline ::GlobalNamespace::SetApplicationVersionText* New_ctor();

  /// @brief Method SetText, addr 0x3b44848, size 0x324, virtual false, abstract: false, final false
  inline void SetText(::BeatSaber::Init::GameVersion* gameVersion);

  /// @brief Method Start, addr 0x3b447b8, size 0x90, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__buildIdText() const;

  constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__buildIdText();

  constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__footSprite() const;

  constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__footSprite();

  constexpr ::BeatSaber::Init::GameVersionProvider*& __cordl_internal_get__gameVersionProvider();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::Init::GameVersionProvider*> const& __cordl_internal_get__gameVersionProvider() const;

  constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__labelText() const;

  constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__labelText();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__nonRCBuildColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__nonRCBuildColor();

  constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__platformIdText() const;

  constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__platformIdText();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__rcBuildColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__rcBuildColor();

  constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__versionText() const;

  constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__versionText();

  constexpr void __cordl_internal_set__buildIdText(::UnityW<::TMPro::TextMeshPro> value);

  constexpr void __cordl_internal_set__footSprite(::UnityW<::UnityEngine::SpriteRenderer> value);

  constexpr void __cordl_internal_set__gameVersionProvider(::BeatSaber::Init::GameVersionProvider* value);

  constexpr void __cordl_internal_set__labelText(::UnityW<::TMPro::TextMeshPro> value);

  constexpr void __cordl_internal_set__nonRCBuildColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__platformIdText(::UnityW<::TMPro::TextMeshPro> value);

  constexpr void __cordl_internal_set__rcBuildColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__versionText(::UnityW<::TMPro::TextMeshPro> value);

  /// @brief Method .ctor, addr 0x3b44b6c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetApplicationVersionText();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetApplicationVersionText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetApplicationVersionText(SetApplicationVersionText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetApplicationVersionText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetApplicationVersionText(SetApplicationVersionText const&) = delete;

  /// @brief Field _versionText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshPro> ____versionText;

  /// @brief Field _labelText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshPro> ____labelText;

  /// @brief Field _buildIdText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshPro> ____buildIdText;

  /// @brief Field _platformIdText, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshPro> ____platformIdText;

  /// @brief Field _footSprite, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SpriteRenderer> ____footSprite;

  /// @brief Field _rcBuildColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____rcBuildColor;

  /// @brief Field _nonRCBuildColor, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Color ____nonRCBuildColor;

  /// @brief Field _gameVersionProvider, offset: 0x68, size: 0x8, def value: None
  ::BeatSaber::Init::GameVersionProvider* ____gameVersionProvider;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4408 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetApplicationVersionText, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SetApplicationVersionText, ____versionText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetApplicationVersionText, ____labelText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetApplicationVersionText, ____buildIdText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetApplicationVersionText, ____platformIdText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetApplicationVersionText, ____footSprite) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetApplicationVersionText, ____rcBuildColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetApplicationVersionText, ____nonRCBuildColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetApplicationVersionText, ____gameVersionProvider) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetApplicationVersionText);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetApplicationVersionText*, "", "SetApplicationVersionText");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SetApplicationVersionText___Start_d__8, "", "SetApplicationVersionText/<Start>d__8");
