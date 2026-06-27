#pragma once
// IWYU pragma private; include "System/Collections/Specialized/NotifyCollectionChangedAction.hpp"
#include "System/Collections/Specialized/zzzz__NotifyCollectionChangedAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Specialized::NotifyCollectionChangedAction::NotifyCollectionChangedAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Collections::Specialized::NotifyCollectionChangedAction::NotifyCollectionChangedAction()   {
}
constexpr ::System::Collections::Specialized::NotifyCollectionChangedAction  System::Collections::Specialized::NotifyCollectionChangedAction::Add{static_cast<int32_t>(0x0)};
constexpr ::System::Collections::Specialized::NotifyCollectionChangedAction  System::Collections::Specialized::NotifyCollectionChangedAction::Remove{static_cast<int32_t>(0x1)};
constexpr ::System::Collections::Specialized::NotifyCollectionChangedAction  System::Collections::Specialized::NotifyCollectionChangedAction::Replace{static_cast<int32_t>(0x2)};
constexpr ::System::Collections::Specialized::NotifyCollectionChangedAction  System::Collections::Specialized::NotifyCollectionChangedAction::Move{static_cast<int32_t>(0x3)};
constexpr ::System::Collections::Specialized::NotifyCollectionChangedAction  System::Collections::Specialized::NotifyCollectionChangedAction::Reset{static_cast<int32_t>(0x4)};
