#pragma once
// IWYU pragma private; include "GlobalNamespace/SongTimeToShaderWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SongTimeToShaderWriter)
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace GlobalNamespace {
class SongTimeToShaderWriter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongTimeToShaderWriter);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongTimeToShaderWriter
class CORDL_TYPE SongTimeToShaderWriter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioTimeSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _songTimePropertyId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__songTimePropertyId, put = setStaticF__songTimePropertyId)) int32_t _songTimePropertyId;

  static inline ::GlobalNamespace::SongTimeToShaderWriter* New_ctor();

  /// @brief Method Update, addr 0x57144f0, size 0x244, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::IAudioTimeSource* const& __cordl_internal_get__audioTimeSource() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  /// @brief Method .ctor, addr 0x5714734, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__songTimePropertyId();

  static inline void setStaticF__songTimePropertyId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongTimeToShaderWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongTimeToShaderWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongTimeToShaderWriter(SongTimeToShaderWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongTimeToShaderWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongTimeToShaderWriter(SongTimeToShaderWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6761 };

  /// @brief Field _audioTimeSource, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongTimeToShaderWriter, ____audioTimeSource) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongTimeToShaderWriter, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongTimeToShaderWriter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongTimeToShaderWriter*, "", "SongTimeToShaderWriter");
