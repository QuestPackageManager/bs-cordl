#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MonoKernel)
namespace Zenject {
class InitializableManager;
}
namespace Zenject {
class DisposableManager;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class TickableManager;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class MonoKernel;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::MonoKernel);
// Type: Zenject::MonoKernel
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 50, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11323))
// CS Name: ::Zenject::MonoKernel*
class CORDL_TYPE MonoKernel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _tickableManager, offset 0x18, size 0x8
  __declspec(property(get = __get__tickableManager, put = __set__tickableManager))::Zenject::TickableManager* _tickableManager;

  /// @brief Field _initializableManager, offset 0x20, size 0x8
  __declspec(property(get = __get__initializableManager, put = __set__initializableManager))::Zenject::InitializableManager* _initializableManager;

  /// @brief Field _disposablesManager, offset 0x28, size 0x8
  __declspec(property(get = __get__disposablesManager, put = __set__disposablesManager))::Zenject::DisposableManager* _disposablesManager;

  /// @brief Field _hasInitialized, offset 0x30, size 0x1
  __declspec(property(get = __get__hasInitialized, put = __set__hasInitialized)) bool _hasInitialized;

  /// @brief Field _isDestroyed, offset 0x31, size 0x1
  __declspec(property(get = __get__isDestroyed, put = __set__isDestroyed)) bool _isDestroyed;

  __declspec(property(get = get_IsDestroyed)) bool IsDestroyed;

  constexpr ::Zenject::TickableManager*& __get__tickableManager();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::TickableManager*> const& __get__tickableManager() const;

  constexpr void __set__tickableManager(::Zenject::TickableManager* value);

  constexpr ::Zenject::InitializableManager*& __get__initializableManager();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InitializableManager*> const& __get__initializableManager() const;

  constexpr void __set__initializableManager(::Zenject::InitializableManager* value);

  constexpr ::Zenject::DisposableManager*& __get__disposablesManager();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DisposableManager*> const& __get__disposablesManager() const;

  constexpr void __set__disposablesManager(::Zenject::DisposableManager* value);

  constexpr bool& __get__hasInitialized();

  constexpr bool const& __get__hasInitialized() const;

  constexpr void __set__hasInitialized(bool value);

  constexpr bool& __get__isDestroyed();

  constexpr bool const& __get__isDestroyed() const;

  constexpr void __set__isDestroyed(bool value);

  /// @brief Method get_IsDestroyed, addr 0x2f1568c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDestroyed();

  /// @brief Method Start, addr 0x2f15694, size 0x4, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Initialize, addr 0x2f15698, size 0x34, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method Update, addr 0x2f156cc, size 0x10, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method FixedUpdate, addr 0x2f156dc, size 0x10, virtual true, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method LateUpdate, addr 0x2f156ec, size 0x10, virtual true, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method OnDestroy, addr 0x2f156fc, size 0x54, virtual true, abstract: false, final false
  inline void OnDestroy();

  static inline ::Zenject::MonoKernel* New_ctor();

  /// @brief Method .ctor, addr 0x2f14a1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method __zenFieldSetter0, addr 0x2f15750, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter1, addr 0x2f15884, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter1(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter2, addr 0x2f159b8, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter2(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f15aec, size 0x480, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "MonoKernel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoKernel(MonoKernel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoKernel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoKernel(MonoKernel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoKernel();

public:
  /// @brief Field _tickableManager, offset: 0x18, size: 0x8, def value: None
  ::Zenject::TickableManager* ____tickableManager;

  /// @brief Field _initializableManager, offset: 0x20, size: 0x8, def value: None
  ::Zenject::InitializableManager* ____initializableManager;

  /// @brief Field _disposablesManager, offset: 0x28, size: 0x8, def value: None
  ::Zenject::DisposableManager* ____disposablesManager;

  /// @brief Field _hasInitialized, offset: 0x30, size: 0x1, def value: None
  bool ____hasInitialized;

  /// @brief Field _isDestroyed, offset: 0x31, size: 0x1, def value: None
  bool ____isDestroyed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::MonoKernel, 0x38>, "Size mismatch!");

static_assert(offsetof(::Zenject::MonoKernel, ____tickableManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::MonoKernel, ____initializableManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::MonoKernel, ____disposablesManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::MonoKernel, ____hasInitialized) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::MonoKernel, ____isDestroyed) == 0x31, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::MonoKernel);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::MonoKernel*, "Zenject", "MonoKernel");
