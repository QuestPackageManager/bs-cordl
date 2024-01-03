#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__Marker_def.hpp"
CORDL_MODULE_EXPORT(SignalEmitter)
namespace UnityEngine::Timeline {
class SignalAsset;
}
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine::Timeline {
struct NotificationFlags;
}
namespace UnityEngine {
struct PropertyName;
}
namespace UnityEngine::Timeline {
class INotificationOptionProvider;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class SignalEmitter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::SignalEmitter);
// Type: UnityEngine.Timeline::SignalEmitter
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13888))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13893))
// CS Name: ::UnityEngine.Timeline::SignalEmitter*
class CORDL_TYPE SignalEmitter : public ::UnityEngine::Timeline::Marker {
public:
  // Declarations
  /// @brief Field m_Retroactive, offset 0x28, size 0x1
  __declspec(property(get = __get_m_Retroactive, put = __set_m_Retroactive)) bool m_Retroactive;

  /// @brief Field m_EmitOnce, offset 0x29, size 0x1
  __declspec(property(get = __get_m_EmitOnce, put = __set_m_EmitOnce)) bool m_EmitOnce;

  /// @brief Field m_Asset, offset 0x30, size 0x8
  __declspec(property(get = __get_m_Asset, put = __set_m_Asset))::UnityEngine::Timeline::SignalAsset* m_Asset;

  __declspec(property(get = get_retroactive, put = set_retroactive)) bool retroactive;

  __declspec(property(get = get_emitOnce, put = set_emitOnce)) bool emitOnce;

  __declspec(property(get = get_asset, put = set_asset))::UnityEngine::Timeline::SignalAsset* asset;

  __declspec(property(get = UnityEngine_Playables_INotification_get_id))::UnityEngine::PropertyName UnityEngine_Playables_INotification_id;

  __declspec(property(get = UnityEngine_Timeline_INotificationOptionProvider_get_flags))::UnityEngine::Timeline::NotificationFlags UnityEngine_Timeline_INotificationOptionProvider_flags;

  /// @brief Convert operator to "::UnityEngine::Playables::INotification"
  constexpr operator ::UnityEngine::Playables::INotification*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Timeline::INotificationOptionProvider"
  constexpr operator ::UnityEngine::Timeline::INotificationOptionProvider*() noexcept;

  constexpr bool& __get_m_Retroactive();

  constexpr bool const& __get_m_Retroactive() const;

  constexpr void __set_m_Retroactive(bool value);

  constexpr bool& __get_m_EmitOnce();

  constexpr bool const& __get_m_EmitOnce() const;

  constexpr void __set_m_EmitOnce(bool value);

  constexpr ::UnityEngine::Timeline::SignalAsset*& __get_m_Asset();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::SignalAsset*> const& __get_m_Asset() const;

  constexpr void __set_m_Asset(::UnityEngine::Timeline::SignalAsset* value);

  /// @brief Method get_retroactive, addr 0x2c68f90, size 0x8, virtual false, abstract: false, final false
  inline bool get_retroactive();

  /// @brief Method set_retroactive, addr 0x2c68f98, size 0xc, virtual false, abstract: false, final false
  inline void set_retroactive(bool value);

  /// @brief Method get_emitOnce, addr 0x2c68fa4, size 0x8, virtual false, abstract: false, final false
  inline bool get_emitOnce();

  /// @brief Method set_emitOnce, addr 0x2c68fac, size 0xc, virtual false, abstract: false, final false
  inline void set_emitOnce(bool value);

  /// @brief Method get_asset, addr 0x2c68fb8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::SignalAsset* get_asset();

  /// @brief Method set_asset, addr 0x2c68fc0, size 0x8, virtual false, abstract: false, final false
  inline void set_asset(::UnityEngine::Timeline::SignalAsset* value);

  /// @brief Method UnityEngine.Playables.INotification.get_id, addr 0x2c68fc8, size 0xc0, virtual true, abstract: false, final true
  inline ::UnityEngine::PropertyName UnityEngine_Playables_INotification_get_id();

  /// @brief Method UnityEngine.Timeline.INotificationOptionProvider.get_flags, addr 0x2c69088, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::Timeline::NotificationFlags UnityEngine_Timeline_INotificationOptionProvider_get_flags();

  static inline ::UnityEngine::Timeline::SignalEmitter* New_ctor();

  /// @brief Method .ctor, addr 0x2c690a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SignalEmitter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalEmitter(SignalEmitter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalEmitter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalEmitter(SignalEmitter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalEmitter();

public:
  /// @brief Field m_Retroactive, offset: 0x28, size: 0x1, def value: None
  bool ___m_Retroactive;

  /// @brief Field m_EmitOnce, offset: 0x29, size: 0x1, def value: None
  bool ___m_EmitOnce;

  /// @brief Field m_Asset, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Timeline::SignalAsset* ___m_Asset;

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
