#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Kernel)
namespace Zenject {
class ITickable;
}
namespace Zenject {
class DisposableManager;
}
namespace Zenject {
class InitializableManager;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class TickableManager;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class IInitializable;
}
namespace Zenject {
class ILateTickable;
}
namespace Zenject {
class IFixedTickable;
}
namespace Zenject {
class ILateDisposable;
}
// Forward declare root types
namespace Zenject {
class Kernel;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::Kernel);
// Type: Zenject::Kernel
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11322))
// CS Name: ::Zenject::Kernel*
class CORDL_TYPE Kernel : public ::System::Object {
public:
  // Declarations
  /// @brief Field _tickableManager, offset 0x10, size 0x8
  __declspec(property(get = __get__tickableManager, put = __set__tickableManager))::Zenject::TickableManager* _tickableManager;

  /// @brief Field _initializableManager, offset 0x18, size 0x8
  __declspec(property(get = __get__initializableManager, put = __set__initializableManager))::Zenject::InitializableManager* _initializableManager;

  /// @brief Field _disposablesManager, offset 0x20, size 0x8
  __declspec(property(get = __get__disposablesManager, put = __set__disposablesManager))::Zenject::DisposableManager* _disposablesManager;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  /// @brief Convert operator to "::Zenject::ILateTickable"
  constexpr operator ::Zenject::ILateTickable*() noexcept;

  /// @brief Convert operator to "::Zenject::IFixedTickable"
  constexpr operator ::Zenject::IFixedTickable*() noexcept;

  /// @brief Convert operator to "::Zenject::ILateDisposable"
  constexpr operator ::Zenject::ILateDisposable*() noexcept;

  constexpr ::Zenject::TickableManager*& __get__tickableManager();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::TickableManager*> const& __get__tickableManager() const;

  constexpr void __set__tickableManager(::Zenject::TickableManager* value);

  constexpr ::Zenject::InitializableManager*& __get__initializableManager();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InitializableManager*> const& __get__initializableManager() const;

  constexpr void __set__initializableManager(::Zenject::InitializableManager* value);

  constexpr ::Zenject::DisposableManager*& __get__disposablesManager();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DisposableManager*> const& __get__disposablesManager() const;

  constexpr void __set__disposablesManager(::Zenject::DisposableManager* value);

  /// @brief Method Initialize addr 0x2f14b9c size 0x18 virtual true final false
  inline void Initialize();

  /// @brief Method Dispose addr 0x2f14bb4 size 0x18 virtual true final false
  inline void Dispose();

  /// @brief Method LateDispose addr 0x2f14bcc size 0x18 virtual true final false
  inline void LateDispose();

  /// @brief Method Tick addr 0x2f14be4 size 0x18 virtual true final false
  inline void Tick();

  /// @brief Method LateTick addr 0x2f14c84 size 0x18 virtual true final false
  inline void LateTick();

  /// @brief Method FixedTick addr 0x2f14d24 size 0x18 virtual true final false
  inline void FixedTick();

  static inline ::Zenject::Kernel* New_ctor();

  /// @brief Method .ctor addr 0x2f14dc4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method __zenCreate addr 0x2f14dcc size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenFieldSetter0 addr 0x2f14e28 size 0x134 virtual false final false
  static inline void __zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter1 addr 0x2f14f5c size 0x134 virtual false final false
  static inline void __zenFieldSetter1(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter2 addr 0x2f15090 size 0x134 virtual false final false
  static inline void __zenFieldSetter2(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2f151c4 size 0x4c8 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "Kernel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Kernel(Kernel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Kernel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Kernel(Kernel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Kernel();

public:
  /// @brief Field _tickableManager, offset: 0x10, size: 0x8, def value: None
  ::Zenject::TickableManager* ____tickableManager;

  /// @brief Field _initializableManager, offset: 0x18, size: 0x8, def value: None
  ::Zenject::InitializableManager* ____initializableManager;

  /// @brief Field _disposablesManager, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DisposableManager* ____disposablesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Kernel, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::Kernel);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Kernel*, "Zenject", "Kernel");
