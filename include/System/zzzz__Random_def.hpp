#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Random)
// Forward declare root types
namespace System {
class Random;
}
// Write type traits
MARK_REF_PTR_T(::System::Random);
// Type: System::Random
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2461))
// CS Name: ::System::Random*
class CORDL_TYPE Random : public ::System::Object {
public:
  // Declarations
  /// @brief Field _inext, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__inext, put = __cordl_internal_set__inext)) int32_t _inext;

  /// @brief Field _inextp, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__inextp, put = __cordl_internal_set__inextp)) int32_t _inextp;

  /// @brief Field _seedArray, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__seedArray, put = __cordl_internal_set__seedArray))::ArrayW<int32_t, ::Array<int32_t>*> _seedArray;

  /// @brief Field t_threadRandom, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_t_threadRandom, put = setStaticF_t_threadRandom))::System::Random* t_threadRandom;

  /// @brief Field s_globalRandom, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_globalRandom, put = setStaticF_s_globalRandom))::System::Random* s_globalRandom;

  constexpr int32_t& __cordl_internal_get__inext();

  constexpr int32_t const& __cordl_internal_get__inext() const;

  constexpr void __cordl_internal_set__inext(int32_t value);

  constexpr int32_t& __cordl_internal_get__inextp();

  constexpr int32_t const& __cordl_internal_get__inextp() const;

  constexpr void __cordl_internal_set__inextp(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__seedArray();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__seedArray() const;

  constexpr void __cordl_internal_set__seedArray(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_t_threadRandom(::System::Random* value);

  static inline ::System::Random* getStaticF_t_threadRandom();

  static inline void setStaticF_s_globalRandom(::System::Random* value);

  static inline ::System::Random* getStaticF_s_globalRandom();

  static inline ::System::Random* New_ctor();

  /// @brief Method .ctor, addr 0x25e1958, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Random* New_ctor(int32_t Seed);

  /// @brief Method .ctor, addr 0x25e1b74, size 0x1b0, virtual false, abstract: false, final false
  inline void _ctor(int32_t Seed);

  /// @brief Method Sample, addr 0x25e1d24, size 0x20, virtual true, abstract: false, final false
  inline double_t Sample();

  /// @brief Method InternalSample, addr 0x25e1d44, size 0x90, virtual false, abstract: false, final false
  inline int32_t InternalSample();

  /// @brief Method GenerateSeed, addr 0x25e19b4, size 0x1c0, virtual false, abstract: false, final false
  static inline int32_t GenerateSeed();

  /// @brief Method GenerateGlobalSeed, addr 0x25e1dd4, size 0x24, virtual false, abstract: false, final false
  static inline int32_t GenerateGlobalSeed();

  /// @brief Method Next, addr 0x25e1df8, size 0x4, virtual true, abstract: false, final false
  inline int32_t Next();

  /// @brief Method GetSampleForLargeRange, addr 0x25e1dfc, size 0x4c, virtual false, abstract: false, final false
  inline double_t GetSampleForLargeRange();

  /// @brief Method Next, addr 0x25e1e48, size 0x11c, virtual true, abstract: false, final false
  inline int32_t Next(int32_t minValue, int32_t maxValue);

  /// @brief Method Next, addr 0x25e1f64, size 0xc8, virtual true, abstract: false, final false
  inline int32_t Next(int32_t maxValue);

  /// @brief Method NextDouble, addr 0x25e202c, size 0xc, virtual true, abstract: false, final false
  inline double_t NextDouble();

  /// @brief Method NextBytes, addr 0x25e2038, size 0xb0, virtual true, abstract: false, final false
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  // Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Random(Random&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Random(Random const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Random();

public:
  /// @brief Field _inext, offset: 0x10, size: 0x4, def value: None
  int32_t ____inext;

  /// @brief Field _inextp, offset: 0x14, size: 0x4, def value: None
  int32_t ____inextp;

  /// @brief Field _seedArray, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____seedArray;

  /// @brief Field MBIG offset 0xffffffff size 0x4
  static constexpr int32_t MBIG{ static_cast<int32_t>(0x7fffffff) };

  /// @brief Field MSEED offset 0xffffffff size 0x4
  static constexpr int32_t MSEED{ static_cast<int32_t>(0x9a4ec86) };

  /// @brief Field MZ offset 0xffffffff size 0x4
  static constexpr int32_t MZ{ static_cast<int32_t>(0x0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Random, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Random, ____inext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Random, ____inextp) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Random, ____seedArray) == 0x18, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::Random);
DEFINE_IL2CPP_ARG_TYPE(::System::Random*, "System", "Random");
