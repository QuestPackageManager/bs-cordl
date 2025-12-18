#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/IOptionalAvatarDataProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IOptionalAvatarDataProvider)
namespace BeatSaber::AvatarCore {
struct AvatarDisplayContext;
}
namespace BeatSaber::AvatarCore {
struct OptionalAvatarData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class IOptionalAvatarDataProvider;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider);
// Dependencies
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.IOptionalAvatarDataProvider
class CORDL_TYPE IOptionalAvatarDataProvider {
public:
  // Declarations
  __declspec(property(get = get_currentData)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>* currentData;

  __declspec(property(get = get_playbackDelayMs)) int64_t playbackDelayMs;

  /// @brief Method SetDisplayContext, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetDisplayContext(::BeatSaber::AvatarCore::AvatarDisplayContext avatarDisplayContext);

  /// @brief Method add_dataDidChangeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_dataDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>* value);

  /// @brief Method get_currentData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>* get_currentData();

  /// @brief Method get_playbackDelayMs, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int64_t get_playbackDelayMs();

  /// @brief Method remove_dataDidChangeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_dataDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IOptionalAvatarDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IOptionalAvatarDataProvider(IOptionalAvatarDataProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21443 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*, "BeatSaber.AvatarCore", "IOptionalAvatarDataProvider");
