#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/ThreadedSeedGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadedSeedGenerator)
namespace Org::BouncyCastle::Crypto::Prng {
class ThreadedSeedGenerator_SeedGenerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class ThreadedSeedGenerator;
}
namespace Org::BouncyCastle::Crypto::Prng {
class ThreadedSeedGenerator_SeedGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Prng.ThreadedSeedGenerator/SeedGenerator
class CORDL_TYPE ThreadedSeedGenerator_SeedGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field counter, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_counter, put = __cordl_internal_set_counter)) int32_t counter;

  /// @brief Field stop, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_stop, put = __cordl_internal_set_stop)) bool stop;

  /// @brief Method DoGenerateSeed, addr 0x23cc780, size 0x200, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DoGenerateSeed(int32_t numBytes, bool fast);

  /// @brief Method GenerateSeed, addr 0x23cc62c, size 0x108, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSeed(int32_t numBytes, bool fast);

  static inline ::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator* New_ctor();

  /// @brief Method Run, addr 0x23cc73c, size 0x44, virtual false, abstract: false, final false
  inline void Run(::System::Object* ignored);

  constexpr int32_t const& __cordl_internal_get_counter() const;

  constexpr int32_t& __cordl_internal_get_counter();

  constexpr bool const& __cordl_internal_get_stop() const;

  constexpr bool& __cordl_internal_get_stop();

  constexpr void __cordl_internal_set_counter(int32_t value);

  constexpr void __cordl_internal_set_stop(bool value);

  /// @brief Method .ctor, addr 0x23cc604, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadedSeedGenerator_SeedGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadedSeedGenerator_SeedGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadedSeedGenerator_SeedGenerator(ThreadedSeedGenerator_SeedGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadedSeedGenerator_SeedGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadedSeedGenerator_SeedGenerator(ThreadedSeedGenerator_SeedGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1117 };

  /// @brief Field counter, offset: 0x10, size: 0x4, def value: None
  int32_t ___counter;

  /// @brief Field stop, offset: 0x14, size: 0x1, def value: None
  bool ___stop;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator, ___counter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator, ___stop) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Prng.ThreadedSeedGenerator
class CORDL_TYPE ThreadedSeedGenerator : public ::System::Object {
public:
  // Declarations
  using SeedGenerator = ::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator;

  /// @brief Method GenerateSeed, addr 0x23cc584, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSeed(int32_t numBytes, bool fast);

  static inline ::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator* New_ctor();

  /// @brief Method .ctor, addr 0x23cc734, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadedSeedGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadedSeedGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadedSeedGenerator(ThreadedSeedGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadedSeedGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadedSeedGenerator(ThreadedSeedGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1118 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator*, "Org.BouncyCastle.Crypto.Prng", "ThreadedSeedGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator*, "Org.BouncyCastle.Crypto.Prng", "ThreadedSeedGenerator/SeedGenerator");
