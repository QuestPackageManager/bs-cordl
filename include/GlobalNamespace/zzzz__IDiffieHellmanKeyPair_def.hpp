#pragma once
// IWYU pragma private; include "GlobalNamespace/IDiffieHellmanKeyPair.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IDiffieHellmanKeyPair)
namespace BGNet::Core {
class ITaskUtility;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IDiffieHellmanKeyPair;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IDiffieHellmanKeyPair);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IDiffieHellmanKeyPair
class CORDL_TYPE IDiffieHellmanKeyPair {
public:
  // Declarations
  __declspec(property(get = get_publicKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey;

  /// @brief Method GetPreMasterSecret, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  /// @brief Method GetPreMasterSecretAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* GetPreMasterSecretAsync(::BGNet::Core::ITaskUtility* taskUtility,
                                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  /// @brief Method get_publicKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_publicKey();

  // Ctor Parameters [CppParam { name: "", ty: "IDiffieHellmanKeyPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDiffieHellmanKeyPair(IDiffieHellmanKeyPair const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14714 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IDiffieHellmanKeyPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IDiffieHellmanKeyPair*, "", "IDiffieHellmanKeyPair");
