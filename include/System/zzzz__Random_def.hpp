#pragma once
// IWYU pragma private; include "System/Random.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Random)
// Forward declare root types
namespace System {
class Random;
}
// Write type traits
MARK_REF_PTR_T(::System::Random);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Random
class CORDL_TYPE Random : public ::System::Object {
public:
  // Declarations
  /// @brief Field _inext, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__inext, put = __cordl_internal_set__inext)) int32_t _inext;

  /// @brief Field _inextp, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__inextp, put = __cordl_internal_set__inextp)) int32_t _inextp;

  /// @brief Field _seedArray, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__seedArray, put = __cordl_internal_set__seedArray)) ::ArrayW<int32_t, ::Array<int32_t>*> _seedArray;

  /// @brief Field s_globalRandom, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_globalRandom, put = setStaticF_s_globalRandom)) ::System::Random* s_globalRandom;

  /// @brief Field t_threadRandom, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_t_threadRandom, put = setStaticF_t_threadRandom)) ::System::Random* t_threadRandom;

  /// @brief Method GenerateGlobalSeed, addr 0x3df7630, size 0x24, virtual false, abstract: false, final false
  static inline int32_t GenerateGlobalSeed();

  /// @brief Method GenerateSeed, addr 0x3df7214, size 0x1c0, virtual false, abstract: false, final false
  static inline int32_t GenerateSeed();

  /// @brief Method GetSampleForLargeRange, addr 0x3df7658, size 0x4c, virtual false, abstract: false, final false
  inline double_t GetSampleForLargeRange();

  /// @brief Method InternalSample, addr 0x3df75a4, size 0x8c, virtual false, abstract: false, final false
  inline int32_t InternalSample();

  static inline ::System::Random* New_ctor();

  static inline ::System::Random* New_ctor(int32_t Seed);

  /// @brief Method Next, addr 0x3df7654, size 0x4, virtual true, abstract: false, final false
  inline int32_t Next();

  /// @brief Method Next, addr 0x3df77bc, size 0xc4, virtual true, abstract: false, final false
  inline int32_t Next(int32_t maxValue);

  /// @brief Method Next, addr 0x3df76a4, size 0x118, virtual true, abstract: false, final false
  inline int32_t Next(int32_t minValue, int32_t maxValue);

  /// @brief Method NextBytes, addr 0x3df788c, size 0xac, virtual true, abstract: false, final false
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method NextDouble, addr 0x3df7880, size 0xc, virtual true, abstract: false, final false
  inline double_t NextDouble();

  /// @brief Method Sample, addr 0x3df7584, size 0x20, virtual true, abstract: false, final false
  inline double_t Sample();

  constexpr int32_t const& __cordl_internal_get__inext() const;

  constexpr int32_t& __cordl_internal_get__inext();

  constexpr int32_t const& __cordl_internal_get__inextp() const;

  constexpr int32_t& __cordl_internal_get__inextp();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__seedArray() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__seedArray();

  constexpr void __cordl_internal_set__inext(int32_t value);

  constexpr void __cordl_internal_set__inextp(int32_t value);

  constexpr void __cordl_internal_set__seedArray(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x3df71b8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3df73d4, size 0x1b0, virtual false, abstract: false, final false
  inline void _ctor(int32_t Seed);

  static inline ::System::Random* getStaticF_s_globalRandom();

  static inline ::System::Random* getStaticF_t_threadRandom();

  static inline void setStaticF_s_globalRandom(::System::Random* value);

  static inline void setStaticF_t_threadRandom(::System::Random* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Random();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Random(Random&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Random(Random const&) = delete;

  /// @brief Field MBIG offset 0xffffffff size 0x4
  static constexpr int32_t MBIG{ static_cast<int32_t>(0x7fffffff) };

  /// @brief Field MSEED offset 0xffffffff size 0x4
  static constexpr int32_t MSEED{ static_cast<int32_t>(0x9a4ec86) };

  /// @brief Field MZ offset 0xffffffff size 0x4
  static constexpr int32_t MZ{ static_cast<int32_t>(0x0) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2460 };

  /// @brief Field _inext, offset: 0x10, size: 0x4, def value: None
  int32_t ____inext;

  /// @brief Field _inextp, offset: 0x14, size: 0x4, def value: None
  int32_t ____inextp;

  /// @brief Field _seedArray, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____seedArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Random, ____inext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Random, ____inextp) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Random, ____seedArray) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Random, 0x20>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Random);
DEFINE_IL2CPP_ARG_TYPE(::System::Random*, "System", "Random");
