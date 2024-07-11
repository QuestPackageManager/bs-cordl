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
// Type: ::SongTimeToShaderWriter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SongTimeToShaderWriter*
class CORDL_TYPE SongTimeToShaderWriter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioTimeSource, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _songTimePropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__songTimePropertyId, put = setStaticF__songTimePropertyId)) int32_t _songTimePropertyId;

  static inline ::GlobalNamespace::SongTimeToShaderWriter* New_ctor();

  /// @brief Method Update, addr 0x26ca32c, size 0x240, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __cordl_internal_get__audioTimeSource() const;

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  /// @brief Method .ctor, addr 0x26ca56c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _audioTimeSource, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongTimeToShaderWriter, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeToShaderWriter, ____audioTimeSource) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongTimeToShaderWriter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongTimeToShaderWriter*, "", "SongTimeToShaderWriter");
