#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadedSeedGenerator)
namespace Org::BouncyCastle::Crypto::Prng {
class __ThreadedSeedGenerator__SeedGenerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class ThreadedSeedGenerator;
}
namespace Org::BouncyCastle::Crypto::Prng {
class __ThreadedSeedGenerator__SeedGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator);
// Type: ::SeedGenerator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 21, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1117))
// CS Name: ::ThreadedSeedGenerator::SeedGenerator*
class CORDL_TYPE __ThreadedSeedGenerator__SeedGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field counter, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_counter, put = __cordl_internal_set_counter)) int32_t counter;

  /// @brief Field stop, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_stop, put = __cordl_internal_set_stop)) bool stop;

  constexpr int32_t& __cordl_internal_get_counter();

  constexpr int32_t const& __cordl_internal_get_counter() const;

  constexpr void __cordl_internal_set_counter(int32_t value);

  constexpr bool& __cordl_internal_get_stop();

  constexpr bool const& __cordl_internal_get_stop() const;

  constexpr void __cordl_internal_set_stop(bool value);

  /// @brief Method Run, addr 0xf6fc18, size 0x44, virtual false, abstract: false, final false
  inline void Run(::System::Object* ignored);

  /// @brief Method GenerateSeed, addr 0xf6fb08, size 0x108, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSeed(int32_t numBytes, bool fast);

  /// @brief Method DoGenerateSeed, addr 0xf6fc5c, size 0x204, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DoGenerateSeed(int32_t numBytes, bool fast);

  static inline ::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator* New_ctor();

  /// @brief Method .ctor, addr 0xf6fae0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ThreadedSeedGenerator__SeedGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ThreadedSeedGenerator__SeedGenerator(__ThreadedSeedGenerator__SeedGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ThreadedSeedGenerator__SeedGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ThreadedSeedGenerator__SeedGenerator(__ThreadedSeedGenerator__SeedGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ThreadedSeedGenerator__SeedGenerator();

public:
  /// @brief Field counter, offset: 0x10, size: 0x4, def value: None
  int32_t ___counter;

  /// @brief Field stop, offset: 0x14, size: 0x1, def value: None
  bool ___stop;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator, ___counter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator, ___stop) == 0x14, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
// Type: Org.BouncyCastle.Crypto.Prng::ThreadedSeedGenerator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1118))
// CS Name: ::Org.BouncyCastle.Crypto.Prng::ThreadedSeedGenerator*
class CORDL_TYPE ThreadedSeedGenerator : public ::System::Object {
public:
  // Declarations
  using SeedGenerator = ::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator;

  /// @brief Method GenerateSeed, addr 0xf6fa58, size 0x88, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSeed(int32_t numBytes, bool fast);

  static inline ::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator* New_ctor();

  /// @brief Method .ctor, addr 0xf6fc10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ThreadedSeedGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadedSeedGenerator(ThreadedSeedGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadedSeedGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadedSeedGenerator(ThreadedSeedGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadedSeedGenerator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator*, "Org.BouncyCastle.Crypto.Prng", "ThreadedSeedGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator*, "Org.BouncyCastle.Crypto.Prng", "ThreadedSeedGenerator/SeedGenerator");
