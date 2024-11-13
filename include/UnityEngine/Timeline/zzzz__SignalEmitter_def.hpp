#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/SignalEmitter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__Marker_def.hpp"
CORDL_MODULE_EXPORT(SignalEmitter)
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine::Timeline {
class INotificationOptionProvider;
}
namespace UnityEngine::Timeline {
struct NotificationFlags;
}
namespace UnityEngine::Timeline {
class SignalAsset;
}
namespace UnityEngine {
struct PropertyName;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class SignalEmitter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::SignalEmitter);
// Type: UnityEngine.Timeline::SignalEmitter
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::SignalEmitter*
class CORDL_TYPE SignalEmitter : public ::UnityEngine::Timeline::Marker {
public:
  // Declarations
  __declspec(property(get = UnityEngine_Playables_INotification_get_id)) ::UnityEngine::PropertyName UnityEngine_Playables_INotification_id;

  __declspec(property(get = UnityEngine_Timeline_INotificationOptionProvider_get_flags)) ::UnityEngine::Timeline::NotificationFlags UnityEngine_Timeline_INotificationOptionProvider_flags;

  __declspec(property(get = get_asset, put = set_asset)) ::UnityW<::UnityEngine::Timeline::SignalAsset> asset;

  __declspec(property(get = get_emitOnce, put = set_emitOnce)) bool emitOnce;

  /// @brief Field m_Asset, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Asset, put = __cordl_internal_set_m_Asset)) ::UnityW<::UnityEngine::Timeline::SignalAsset> m_Asset;

  /// @brief Field m_EmitOnce, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EmitOnce, put = __cordl_internal_set_m_EmitOnce)) bool m_EmitOnce;

  /// @brief Field m_Retroactive, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Retroactive, put = __cordl_internal_set_m_Retroactive)) bool m_Retroactive;

  __declspec(property(get = get_retroactive, put = set_retroactive)) bool retroactive;

  /// @brief Convert operator to "::UnityEngine::Playables::INotification"
  constexpr operator ::UnityEngine::Playables::INotification*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Timeline::INotificationOptionProvider"
  constexpr operator ::UnityEngine::Timeline::INotificationOptionProvider*() noexcept;

  static inline ::UnityEngine::Timeline::SignalEmitter* New_ctor();

  /// @brief Method UnityEngine.Playables.INotification.get_id, addr 0x47c37f0, size 0xc0, virtual true, abstract: false, final true
  inline ::UnityEngine::PropertyName UnityEngine_Playables_INotification_get_id();

  /// @brief Method UnityEngine.Timeline.INotificationOptionProvider.get_flags, addr 0x47c38b0, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::Timeline::NotificationFlags UnityEngine_Timeline_INotificationOptionProvider_get_flags();

  constexpr ::UnityW<::UnityEngine::Timeline::SignalAsset> const& __cordl_internal_get_m_Asset() const;

  constexpr ::UnityW<::UnityEngine::Timeline::SignalAsset>& __cordl_internal_get_m_Asset();

  constexpr bool const& __cordl_internal_get_m_EmitOnce() const;

  constexpr bool& __cordl_internal_get_m_EmitOnce();

  constexpr bool const& __cordl_internal_get_m_Retroactive() const;

  constexpr bool& __cordl_internal_get_m_Retroactive();

  constexpr void __cordl_internal_set_m_Asset(::UnityW<::UnityEngine::Timeline::SignalAsset> value);

  constexpr void __cordl_internal_set_m_EmitOnce(bool value);

  constexpr void __cordl_internal_set_m_Retroactive(bool value);

  /// @brief Method .ctor, addr 0x47c38cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_asset, addr 0x47c37e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Timeline::SignalAsset> get_asset();

  /// @brief Method get_emitOnce, addr 0x47c37cc, size 0x8, virtual false, abstract: false, final false
  inline bool get_emitOnce();

  /// @brief Method get_retroactive, addr 0x47c37b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_retroactive();

  /// @brief Convert to "::UnityEngine::Playables::INotification"
  constexpr ::UnityEngine::Playables::INotification* i___UnityEngine__Playables__INotification() noexcept;

  /// @brief Convert to "::UnityEngine::Timeline::INotificationOptionProvider"
  constexpr ::UnityEngine::Timeline::INotificationOptionProvider* i___UnityEngine__Timeline__INotificationOptionProvider() noexcept;

  /// @brief Method set_asset, addr 0x47c37e8, size 0x8, virtual false, abstract: false, final false
  inline void set_asset(::UnityEngine::Timeline::SignalAsset* value);

  /// @brief Method set_emitOnce, addr 0x47c37d4, size 0xc, virtual false, abstract: false, final false
  inline void set_emitOnce(bool value);

  /// @brief Method set_retroactive, addr 0x47c37c0, size 0xc, virtual false, abstract: false, final false
  inline void set_retroactive(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalEmitter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalEmitter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalEmitter(SignalEmitter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalEmitter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalEmitter(SignalEmitter const&) = delete;

  /// @brief Field m_Retroactive, offset: 0x28, size: 0x1, def value: None
  bool ___m_Retroactive;

  /// @brief Field m_EmitOnce, offset: 0x29, size: 0x1, def value: None
  bool ___m_EmitOnce;

  /// @brief Field m_Asset, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Timeline::SignalAsset> ___m_Asset;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15816 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::SignalEmitter, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::SignalEmitter, ___m_Retroactive) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::SignalEmitter, ___m_EmitOnce) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::SignalEmitter, ___m_Asset) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::SignalEmitter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::SignalEmitter*, "UnityEngine.Timeline", "SignalEmitter");
