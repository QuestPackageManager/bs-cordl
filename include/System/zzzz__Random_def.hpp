#pragma once
// IWYU pragma private; include "System/Random.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Random)
// Forward declare root types
namespace System {
class Random;
}
// Write type traits
MARK_REF_T(::System::Random*);
DEFINE_IL2CPP_CLASS(::System::Random*, "System", "Random");
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
  __declspec(property(get = __cordl_internal_get__seedArray, put = __cordl_internal_set__seedArray)) ::ArrayW<int32_t> _seedArray;

  /// @brief Field s_globalRandom, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_globalRandom, put = setStaticF_s_globalRandom)) ::System::Random* s_globalRandom;

  /// @brief Field t_threadRandom, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_t_threadRandom, put = setStaticF_t_threadRandom)) ::System::Random* t_threadRandom;

  /// @brief Method GenerateGlobalSeed, addr 0x5c57760, size 0x24, virtual false, abstract: false, final false
  static inline int32_t GenerateGlobalSeed();

  /// @brief Method GenerateSeed, addr 0x5c57308, size 0x20c, virtual false, abstract: false, final false
  static inline int32_t GenerateSeed();

  /// @brief Method GetSampleForLargeRange, addr 0x5c57788, size 0x4c, virtual false, abstract: false, final false
  inline double_t GetSampleForLargeRange();

  /// @brief Method InternalSample, addr 0x5c576d0, size 0x90, virtual false, abstract: false, final false
  inline int32_t InternalSample();

  static inline ::System::Random* New_ctor();

  static inline ::System::Random* New_ctor(int32_t Seed);

  /// @brief Method Next, addr 0x5c57784, size 0x4, virtual true, abstract: false, final false
  inline int32_t Next();

  /// @brief Method Next, addr 0x5c578ec, size 0xc4, virtual true, abstract: false, final false
  inline int32_t Next(int32_t maxValue);

  /// @brief Method Next, addr 0x5c577d4, size 0x118, virtual true, abstract: false, final false
  inline int32_t Next(int32_t minValue, int32_t maxValue);

  /// @brief Method NextBytes, addr 0x5c579bc, size 0xac, virtual true, abstract: false, final false
  inline void NextBytes(::ArrayW<uint8_t> buffer);

  /// @brief Method NextDouble, addr 0x5c579b0, size 0xc, virtual true, abstract: false, final false
  inline double_t NextDouble();

  /// @brief Method Sample, addr 0x5c576b0, size 0x20, virtual true, abstract: false, final false
  inline double_t Sample();

  constexpr int32_t const& __cordl_internal_get__inext() const;

  constexpr int32_t& __cordl_internal_get__inext();

  constexpr int32_t const& __cordl_internal_get__inextp() const;

  constexpr int32_t& __cordl_internal_get__inextp();

  constexpr ::ArrayW<int32_t> const& __cordl_internal_get__seedArray() const;

  constexpr ::ArrayW<int32_t>& __cordl_internal_get__seedArray();

  constexpr void __cordl_internal_set__inext(int32_t value);

  constexpr void __cordl_internal_set__inextp(int32_t value);

  constexpr void __cordl_internal_set__seedArray(::ArrayW<int32_t> value);

  /// @brief Method .ctor, addr 0x5c572a8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5c57514, size 0x19c, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2465 };

  /// @brief Field _inext, offset: 0x10, size: 0x4, def value: None
  int32_t ____inext;

  /// @brief Field _inextp, offset: 0x14, size: 0x4, def value: None
  int32_t ____inextp;

  /// @brief Field _seedArray, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t> ____seedArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Random, ____inext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Random, ____inextp) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Random, ____seedArray) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Random) == 0x20, "Size mismatch!");

} // namespace System
