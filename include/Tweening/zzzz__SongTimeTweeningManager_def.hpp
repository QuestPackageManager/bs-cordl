#pragma once
// IWYU pragma private; include "Tweening/SongTimeTweeningManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tweening/zzzz__TweeningManager_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SongTimeTweeningManager)
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace Tweening {
class SongTimeTweeningManager;
}
// Write type traits
MARK_REF_PTR_T(::Tweening::SongTimeTweeningManager);
// Type: Tweening::SongTimeTweeningManager
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Tweening {
// Is value type: false
// CS Name: ::Tweening::SongTimeTweeningManager*
class CORDL_TYPE SongTimeTweeningManager : public ::Tweening::TweeningManager {
public:
  // Declarations
  /// @brief Field _audioTimeSource, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Method GetTime, addr 0x3b12320, size 0xa0, virtual true, abstract: false, final false
  inline float_t GetTime();

  static inline ::Tweening::SongTimeTweeningManager* New_ctor();

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __cordl_internal_get__audioTimeSource() const;

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  /// @brief Method .ctor, addr 0x3b123c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongTimeTweeningManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongTimeTweeningManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongTimeTweeningManager(SongTimeTweeningManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongTimeTweeningManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongTimeTweeningManager(SongTimeTweeningManager const&) = delete;

  /// @brief Field _audioTimeSource, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5376 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tweening::SongTimeTweeningManager, 0x58>, "Size mismatch!");

static_assert(offsetof(::Tweening::SongTimeTweeningManager, ____audioTimeSource) == 0x50, "Offset mismatch!");

} // namespace Tweening
NEED_NO_BOX(::Tweening::SongTimeTweeningManager);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::SongTimeTweeningManager*, "Tweening", "SongTimeTweeningManager");
