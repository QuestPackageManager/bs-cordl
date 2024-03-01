#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PerlinNoise)
// Forward declare root types
namespace GlobalNamespace {
class PerlinNoise;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerlinNoise);
// Type: ::PerlinNoise
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PerlinNoise*
class CORDL_TYPE PerlinNoise : public ::System::Object {
public:
  // Declarations
  /// @brief Field p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_p, put = setStaticF_p))::ArrayW<int32_t, ::Array<int32_t>*> p;

  /// @brief Field permutation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_permutation, put = setStaticF_permutation))::ArrayW<int32_t, ::Array<int32_t>*> permutation;

  /// @brief Method Fade, addr 0x2256500, size 0x2c, virtual false, abstract: false, final false
  static inline float_t Fade(float_t t);

  /// @brief Method Grad3D, addr 0x2256544, size 0x74, virtual false, abstract: false, final false
  static inline float_t Grad3D(int32_t hash, float_t x, float_t y, float_t z);

  /// @brief Method Inc, addr 0x225652c, size 0x18, virtual false, abstract: false, final false
  static inline int32_t Inc(int32_t num, int32_t repeat);

  /// @brief Method Lerp, addr 0x22565b8, size 0x10, virtual false, abstract: false, final false
  static inline float_t Lerp(float_t a, float_t b, float_t x);

  static inline ::GlobalNamespace::PerlinNoise* New_ctor();

  /// @brief Method OctavePerlin3D, addr 0x2255eec, size 0xdc, virtual false, abstract: false, final false
  static inline float_t OctavePerlin3D(float_t x, float_t y, float_t z, int32_t octaves, float_t persistence, int32_t repeat);

  /// @brief Method Perlin3D, addr 0x2255fc8, size 0x538, virtual false, abstract: false, final false
  static inline float_t Perlin3D(float_t x, float_t y, float_t z, int32_t repeat);

  /// @brief Method .ctor, addr 0x22565c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_p();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_permutation();

  static inline void setStaticF_p(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_permutation(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerlinNoise();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerlinNoise", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerlinNoise(PerlinNoise&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerlinNoise", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerlinNoise(PerlinNoise const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerlinNoise, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerlinNoise);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerlinNoise*, "", "PerlinNoise");
